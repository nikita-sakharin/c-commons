/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef C_COMMONS_DEBUG_H
#define C_COMMONS_DEBUG_H

#include <stdbool.h> // bool
#include <stddef.h> // NULL, ptrdiff_t, size_t
#include <stdint.h> // PTRDIFF_MAX, PTRDIFF_MIN

#include <c_commons/arithmetic.h> // between, sign
#include <c_commons/preprocessor.h> // COMPARE

inline bool checkCount(register const size_t count) [[unsequenced]] {
    return count <= PTRDIFF_MAX;
}

inline bool checkMemory(
    register const void * const src,
    register const size_t n
) [[unsequenced]] {
#   ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wstrict-overflow"
#   elifdef __GNUC__
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wstrict-overflow"
#   endif
    return src != NULL && checkCount(n)
        && (const char *) src <= (const char *) src + n;
#   ifdef __clang__
#   pragma clang diagnostic pop
#   elifdef __GNUC__
#   pragma GCC diagnostic pop
#   endif
}

inline bool checkMemoryCompare(
    register const void * const src,
    register const size_t n,
    register int (* const cmp)(const void *, const void *)
) [[unsequenced]] {
    return checkMemory(src, n) && cmp != NULL;
}

inline bool checkRange(
    register const void * const ptr1,
    register const void * const ptr2
) [[unsequenced]] {
    register const ptrdiff_t
        difference = (const char *) ptr1 - (const char *) ptr2;
    return (ptr1 == NULL) == (ptr2 == NULL) && difference != PTRDIFF_MIN
        && sign(difference) == COMPARE(ptr1, ptr2);
}

inline bool checkSize(register const size_t size) [[unsequenced]] {
    return between(size, 1U, PTRDIFF_MAX);
}

#endif // C_COMMONS_DEBUG_H
