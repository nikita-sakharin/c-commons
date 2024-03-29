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
#ifndef C_COMMONS_SYSTEM_CONFIG_H
#define C_COMMONS_SYSTEM_CONFIG_H

#include <assert.h> // static_assert
#include <stdalign.h> // alignof
#include <stddef.h> // max_align_t, ptrdiff_t, size_t
#include <stdint.h> // PTRDIFF_MAX, SIZE_MAX

#include <c_commons/bit.h> // IS_POWER_OF_TWO

#ifndef LEVEL1_DCACHE_LINESIZE
#define LEVEL1_DCACHE_LINESIZE (64U & SIZE_MAX)
#endif // LEVEL1_DCACHE_LINESIZE
static_assert(
    LEVEL1_DCACHE_LINESIZE >= (ptrdiff_t) alignof(max_align_t) &&
        LEVEL1_DCACHE_LINESIZE <= PTRDIFF_MAX &&
        IS_POWER_OF_TWO(LEVEL1_DCACHE_LINESIZE),
    "LEVEL1_DCACHE_LINESIZE shall be a power of 2, "
    "not less than alignof(max_align_t) and not greater than PTRDIFF_MAX"
);

#ifndef LEVEL1_ICACHE_LINESIZE
#define LEVEL1_ICACHE_LINESIZE (64U & SIZE_MAX)
#endif // LEVEL1_ICACHE_LINESIZE
static_assert(
    LEVEL1_ICACHE_LINESIZE >= (ptrdiff_t) alignof(max_align_t) &&
        LEVEL1_ICACHE_LINESIZE <= PTRDIFF_MAX &&
        IS_POWER_OF_TWO(LEVEL1_ICACHE_LINESIZE),
    "LEVEL1_ICACHE_LINESIZE shall be a power of 2, "
    "not less than alignof(max_align_t) and not greater than PTRDIFF_MAX"
);

#ifndef LEVEL2_CACHE_LINESIZE
#define LEVEL2_CACHE_LINESIZE (64U & SIZE_MAX)
#endif // LEVEL2_CACHE_LINESIZE
static_assert(
    LEVEL2_CACHE_LINESIZE >= (ptrdiff_t) alignof(max_align_t) &&
        LEVEL2_CACHE_LINESIZE <= PTRDIFF_MAX &&
        IS_POWER_OF_TWO(LEVEL2_CACHE_LINESIZE),
    "LEVEL2_CACHE_LINESIZE shall be a power of 2, "
    "not less than alignof(max_align_t) and not greater than PTRDIFF_MAX"
);

#ifndef LEVEL3_CACHE_LINESIZE
#define LEVEL3_CACHE_LINESIZE (64U & SIZE_MAX)
#endif // LEVEL3_CACHE_LINESIZE
static_assert(
    LEVEL3_CACHE_LINESIZE == 0U || (
        LEVEL3_CACHE_LINESIZE >= (ptrdiff_t) alignof(max_align_t) &&
        LEVEL3_CACHE_LINESIZE <= PTRDIFF_MAX &&
        IS_POWER_OF_TWO(LEVEL3_CACHE_LINESIZE)
    ),
    "LEVEL3_CACHE_LINESIZE shall either be equal to 0 or be a power of 2, "
    "not less than alignof(max_align_t) and not greater than PTRDIFF_MAX"
);

#ifndef LEVEL4_CACHE_LINESIZE
#define LEVEL4_CACHE_LINESIZE (~SIZE_MAX)
#endif // LEVEL4_CACHE_LINESIZE
static_assert(
    LEVEL4_CACHE_LINESIZE == 0U || (LEVEL3_CACHE_LINESIZE != 0U &&
        LEVEL4_CACHE_LINESIZE >= (ptrdiff_t) alignof(max_align_t) &&
        LEVEL4_CACHE_LINESIZE <= PTRDIFF_MAX &&
        IS_POWER_OF_TWO(LEVEL4_CACHE_LINESIZE)
    ),
    "LEVEL4_CACHE_LINESIZE shall either be equal to 0 or be a power of 2, "
    "not less than alignof(max_align_t) and not greater than PTRDIFF_MAX. "
    "If LEVEL3_CACHE_LINESIZE is equal to 0, "
    "then LEVEL4_CACHE_LINESIZE shall be equal to 0 too"
);

#endif // C_COMMONS_SYSTEM_CONFIG_H
