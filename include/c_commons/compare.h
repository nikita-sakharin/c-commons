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
#ifndef C_COMMONS_COMPARE_H
#define C_COMMONS_COMPARE_H

#include <assert.h> // assert
#include <stdbool.h> // bool
#include <stddef.h> // NULL
#include <stdint.h> // intmax_t, uintmax_t

#include <c_commons/types.h> // *

#define CMP_GREATER(x, y) ((x) > (y) ? -1 : (y) > (x))
#define CMP_LESS(x, y) ((x) < (y) ? -1 : (y) < (x))

// short or shrt, str or string
// (((uintptr) s1 | (uintptr) s2) & aligof(int) - 1) == 0
inline int cmpGreaterBool(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const bool x = *(const bool *) s1, y = *(const bool *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterChar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const char x = *(const char *) s1, y = *(const char *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterSchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const schar x = *(const schar *) s1, y = *(const schar *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterUchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const uchar x = *(const uchar *) s1, y = *(const uchar *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterShrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const shrt x = *(const shrt *) s1, y = *(const shrt *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterUshrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const ushrt x = *(const ushrt *) s1, y = *(const ushrt *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterInt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const int x = *(const int *) s1, y = *(const int *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterUint(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const uint x = *(const uint *) s1, y = *(const uint *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterLong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const long x = *(const long *) s1, y = *(const long *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterUlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const ulong x = *(const ulong *) s1, y = *(const ulong *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterLlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const llong x = *(const llong *) s1, y = *(const llong *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterUllong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const ullong x = *(const ullong *) s1, y = *(const ullong *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterIntmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const intmax_t x = *(const intmax_t *) s1, y = *(const intmax_t *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterUintmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const uintmax_t x = *(const uintmax_t *) s1, y = *(const uintmax_t *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterFlt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const flt x = *(const flt *) s1, y = *(const flt *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterDbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const dbl x = *(const dbl *) s1, y = *(const dbl *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpGreaterLdbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const ldbl x = *(const ldbl *) s1, y = *(const ldbl *) s2;
    return CMP_GREATER(x, y);
}

inline int cmpLessBool(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const bool x = *(const bool *) s1, y = *(const bool *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessChar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const char x = *(const char *) s1, y = *(const char *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessSchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const schar x = *(const schar *) s1, y = *(const schar *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessUchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const uchar x = *(const uchar *) s1, y = *(const uchar *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessShrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const shrt x = *(const shrt *) s1, y = *(const shrt *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessUshrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const ushrt x = *(const ushrt *) s1, y = *(const ushrt *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessInt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const int x = *(const int *) s1, y = *(const int *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessUint(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const uint x = *(const uint *) s1, y = *(const uint *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessLong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const long x = *(const long *) s1, y = *(const long *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessUlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const ulong x = *(const ulong *) s1, y = *(const ulong *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessLlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const llong x = *(const llong *) s1, y = *(const llong *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessUllong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const ullong x = *(const ullong *) s1, y = *(const ullong *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessIntmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const intmax_t x = *(const intmax_t *) s1, y = *(const intmax_t *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessUintmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const uintmax_t x = *(const uintmax_t *) s1, y = *(const uintmax_t *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessFlt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const flt x = *(const flt *) s1, y = *(const flt *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessDbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const dbl x = *(const dbl *) s1, y = *(const dbl *) s2;
    return CMP_LESS(x, y);
}

inline int cmpLessLdbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    register const ldbl x = *(const ldbl *) s1, y = *(const ldbl *) s2;
    return CMP_LESS(x, y);
}

inline bool isEqualBool(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const bool *) s1 == *(const bool *) s2;
}

inline bool isEqualChar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const char *) s1 == *(const char *) s2;
}

inline bool isEqualSchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const schar *) s1 == *(const schar *) s2;
}

inline bool isEqualUchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uchar *) s1 == *(const uchar *) s2;
}

inline bool isEqualShrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const shrt *) s1 == *(const shrt *) s2;
}

inline bool isEqualUshrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ushrt *) s1 == *(const ushrt *) s2;
}

inline bool isEqualInt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const int *) s1 == *(const int *) s2;
}

inline bool isEqualUint(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uint *) s1 == *(const uint *) s2;
}

inline bool isEqualLong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const long *) s1 == *(const long *) s2;
}

inline bool isEqualUlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ulong *) s1 == *(const ulong *) s2;
}

inline bool isEqualLlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const llong *) s1 == *(const llong *) s2;
}

inline bool isEqualUllong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ullong *) s1 == *(const ullong *) s2;
}

inline bool isEqualIntmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const intmax_t *) s1 == *(const intmax_t *) s2;
}

inline bool isEqualUintmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uintmax_t *) s1 == *(const uintmax_t *) s2;
}

inline bool isEqualFlt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
#   ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wfloat-equal"
#   elifdef __GNUC__
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wfloat-equal"
#   endif
    return *(const flt *) s1 == *(const flt *) s2;
#   ifdef __clang__
#   pragma clang diagnostic pop
#   elifdef __GNUC__
#   pragma GCC diagnostic pop
#   endif
}

inline bool isEqualDbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
#   ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wfloat-equal"
#   elifdef __GNUC__
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wfloat-equal"
#   endif
    return *(const dbl *) s1 == *(const dbl *) s2;
#   ifdef __clang__
#   pragma clang diagnostic pop
#   elifdef __GNUC__
#   pragma GCC diagnostic pop
#   endif
}

inline bool isEqualLdbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
#   ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wfloat-equal"
#   elifdef __GNUC__
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wfloat-equal"
#   endif
    return *(const ldbl *) s1 == *(const ldbl *) s2;
#   ifdef __clang__
#   pragma clang diagnostic pop
#   elifdef __GNUC__
#   pragma GCC diagnostic pop
#   endif
}

inline bool isGreaterBool(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const bool *) s1 > *(const bool *) s2;
}

inline bool isGreaterChar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const char *) s1 > *(const char *) s2;
}

inline bool isGreaterSchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const schar *) s1 > *(const schar *) s2;
}

inline bool isGreaterUchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uchar *) s1 > *(const uchar *) s2;
}

inline bool isGreaterShrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const shrt *) s1 > *(const shrt *) s2;
}

inline bool isGreaterUshrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ushrt *) s1 > *(const ushrt *) s2;
}

inline bool isGreaterInt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const int *) s1 > *(const int *) s2;
}

inline bool isGreaterUint(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uint *) s1 > *(const uint *) s2;
}

inline bool isGreaterLong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const long *) s1 > *(const long *) s2;
}

inline bool isGreaterUlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ulong *) s1 > *(const ulong *) s2;
}

inline bool isGreaterLlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const llong *) s1 > *(const llong *) s2;
}

inline bool isGreaterUllong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ullong *) s1 > *(const ullong *) s2;
}

inline bool isGreaterIntmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const intmax_t *) s1 > *(const intmax_t *) s2;
}

inline bool isGreaterUintmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uintmax_t *) s1 > *(const uintmax_t *) s2;
}

inline bool isGreaterFlt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const flt *) s1 > *(const flt *) s2;
}

inline bool isGreaterDbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const dbl *) s1 > *(const dbl *) s2;
}

inline bool isGreaterLdbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ldbl *) s1 > *(const ldbl *) s2;
}

inline bool isGreaterEqualBool(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const bool *) s1 >= *(const bool *) s2;
}

inline bool isGreaterEqualChar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const char *) s1 >= *(const char *) s2;
}

inline bool isGreaterEqualSchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const schar *) s1 >= *(const schar *) s2;
}

inline bool isGreaterEqualUchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uchar *) s1 >= *(const uchar *) s2;
}

inline bool isGreaterEqualShrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const shrt *) s1 >= *(const shrt *) s2;
}

inline bool isGreaterEqualUshrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ushrt *) s1 >= *(const ushrt *) s2;
}

inline bool isGreaterEqualInt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const int *) s1 >= *(const int *) s2;
}

inline bool isGreaterEqualUint(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uint *) s1 >= *(const uint *) s2;
}

inline bool isGreaterEqualLong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const long *) s1 >= *(const long *) s2;
}

inline bool isGreaterEqualUlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ulong *) s1 >= *(const ulong *) s2;
}

inline bool isGreaterEqualLlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const llong *) s1 >= *(const llong *) s2;
}

inline bool isGreaterEqualUllong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ullong *) s1 >= *(const ullong *) s2;
}

inline bool isGreaterEqualIntmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const intmax_t *) s1 >= *(const intmax_t *) s2;
}

inline bool isGreaterEqualUintmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uintmax_t *) s1 >= *(const uintmax_t *) s2;
}

inline bool isGreaterEqualFlt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const flt *) s1 >= *(const flt *) s2;
}

inline bool isGreaterEqualDbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const dbl *) s1 >= *(const dbl *) s2;
}

inline bool isGreaterEqualLdbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ldbl *) s1 >= *(const ldbl *) s2;
}

inline bool isLessBool(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const bool *) s1 < *(const bool *) s2;
}

inline bool isLessChar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const char *) s1 < *(const char *) s2;
}

inline bool isLessSchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const schar *) s1 < *(const schar *) s2;
}

inline bool isLessUchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uchar *) s1 < *(const uchar *) s2;
}

inline bool isLessShrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const shrt *) s1 < *(const shrt *) s2;
}

inline bool isLessUshrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ushrt *) s1 < *(const ushrt *) s2;
}

inline bool isLessInt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const int *) s1 < *(const int *) s2;
}

inline bool isLessUint(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uint *) s1 < *(const uint *) s2;
}

inline bool isLessLong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const long *) s1 < *(const long *) s2;
}

inline bool isLessUlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ulong *) s1 < *(const ulong *) s2;
}

inline bool isLessLlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const llong *) s1 < *(const llong *) s2;
}

inline bool isLessUllong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ullong *) s1 < *(const ullong *) s2;
}

inline bool isLessIntmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const intmax_t *) s1 < *(const intmax_t *) s2;
}

inline bool isLessUintmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uintmax_t *) s1 < *(const uintmax_t *) s2;
}

inline bool isLessFlt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const flt *) s1 < *(const flt *) s2;
}

inline bool isLessDbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const dbl *) s1 < *(const dbl *) s2;
}

inline bool isLessLdbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ldbl *) s1 < *(const ldbl *) s2;
}

inline bool isLessEqualBool(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const bool *) s1 <= *(const bool *) s2;
}

inline bool isLessEqualChar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const char *) s1 <= *(const char *) s2;
}

inline bool isLessEqualSchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const schar *) s1 <= *(const schar *) s2;
}

inline bool isLessEqualUchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uchar *) s1 <= *(const uchar *) s2;
}

inline bool isLessEqualShrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const shrt *) s1 <= *(const shrt *) s2;
}

inline bool isLessEqualUshrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ushrt *) s1 <= *(const ushrt *) s2;
}

inline bool isLessEqualInt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const int *) s1 <= *(const int *) s2;
}

inline bool isLessEqualUint(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uint *) s1 <= *(const uint *) s2;
}

inline bool isLessEqualLong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const long *) s1 <= *(const long *) s2;
}

inline bool isLessEqualUlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ulong *) s1 <= *(const ulong *) s2;
}

inline bool isLessEqualLlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const llong *) s1 <= *(const llong *) s2;
}

inline bool isLessEqualUllong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ullong *) s1 <= *(const ullong *) s2;
}

inline bool isLessEqualIntmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const intmax_t *) s1 <= *(const intmax_t *) s2;
}

inline bool isLessEqualUintmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uintmax_t *) s1 <= *(const uintmax_t *) s2;
}

inline bool isLessEqualFlt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const flt *) s1 <= *(const flt *) s2;
}

inline bool isLessEqualDbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const dbl *) s1 <= *(const dbl *) s2;
}

inline bool isLessEqualLdbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ldbl *) s1 <= *(const ldbl *) s2;
}

inline bool isNotEqualBool(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const bool *) s1 != *(const bool *) s2;
}

inline bool isNotEqualChar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const char *) s1 != *(const char *) s2;
}

inline bool isNotEqualSchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const schar *) s1 != *(const schar *) s2;
}

inline bool isNotEqualUchar(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uchar *) s1 != *(const uchar *) s2;
}

inline bool isNotEqualShrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const shrt *) s1 != *(const shrt *) s2;
}

inline bool isNotEqualUshrt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ushrt *) s1 != *(const ushrt *) s2;
}

inline bool isNotEqualInt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const int *) s1 != *(const int *) s2;
}

inline bool isNotEqualUint(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uint *) s1 != *(const uint *) s2;
}

inline bool isNotEqualLong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const long *) s1 != *(const long *) s2;
}

inline bool isNotEqualUlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ulong *) s1 != *(const ulong *) s2;
}

inline bool isNotEqualLlong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const llong *) s1 != *(const llong *) s2;
}

inline bool isNotEqualUllong(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const ullong *) s1 != *(const ullong *) s2;
}

inline bool isNotEqualIntmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const intmax_t *) s1 != *(const intmax_t *) s2;
}

inline bool isNotEqualUintmax(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
    return *(const uintmax_t *) s1 != *(const uintmax_t *) s2;
}

inline bool isNotEqualFlt(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
#   ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wfloat-equal"
#   elifdef __GNUC__
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wfloat-equal"
#   endif
    return *(const flt *) s1 != *(const flt *) s2;
#   ifdef __clang__
#   pragma clang diagnostic pop
#   elifdef __GNUC__
#   pragma GCC diagnostic pop
#   endif
}

inline bool isNotEqualDbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
#   ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wfloat-equal"
#   elifdef __GNUC__
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wfloat-equal"
#   endif
    return *(const dbl *) s1 != *(const dbl *) s2;
#   ifdef __clang__
#   pragma clang diagnostic pop
#   elifdef __GNUC__
#   pragma GCC diagnostic pop
#   endif
}

inline bool isNotEqualLdbl(
    register const void * const s1,
    register const void * const s2
) {
    assert(s1 != NULL && s2 != NULL);
#   ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wfloat-equal"
#   elifdef __GNUC__
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wfloat-equal"
#   endif
    return *(const ldbl *) s1 != *(const ldbl *) s2;
#   ifdef __clang__
#   pragma clang diagnostic pop
#   elifdef __GNUC__
#   pragma GCC diagnostic pop
#   endif
}

#endif // C_COMMONS_COMPARE_H
