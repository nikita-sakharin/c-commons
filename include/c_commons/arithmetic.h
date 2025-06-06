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
#ifndef C_COMMONS_ARITHMETIC_H
#define C_COMMONS_ARITHMETIC_H

#include <assert.h> // assert
#include <inttypes.h> // imaxabs, imaxdiv
#include <stdbool.h> // bool
#include <stdint.h> // intmax_t, uintmax_t
#include <stdlib.h> // abs, div, labs, ldiv, llabs, lldiv

#include <c_commons/preprocessor.h> // *
#include <c_commons/type_generic.h> // TYPE_GENERIC_*INTEGER_*
#include <c_commons/types.h> // llong, uint, ullong, ulong

#define EUCLID_DIV(x, y) ((x) / (y) + ((x) % (y) < 0 ? 0 < (y) ? -1 : 1 : 0))
#define EUCLID_MOD(x, y) ((x) % (y) < 0 ? (y) < 0 ? (x) % (y) - (y) : (x) % (y) + (y) : (x) % (y))
#define MIDPOINT(x, y) ((x) + (((y) >> 1) - ((x) >> 1)) + ((((y) & 1) - ((x) & 1) + ((y) < (x))) >> 1))
// #define MIDPOINT(x, y) ((x) + ((y) / 2 - (x) / 2) + (((y) % 2 - (x) % 2 + ((y) < (x))) >> 1))
// #define MIDPOINT(x, y) ((y) < (x) ? MIDPOINT_CEIL(x, y) : MIDPOINT_FLOOR(x, y))
#define MIDPOINT_CEIL(x, y) (((x) | (y)) - (((x) ^ (y)) >> 1))
// #define MIDPOINT_CEIL(x, y) (((x) >> 1) + ((y) >> 1) + (((x) | (y)) & 1))
// #define MIDPOINT_CEIL(x, y) (MAX(x, y) - ABS(x / 2 - y / 2))
#define MIDPOINT_FLOOR(x, y) (((x) & (y)) + (((x) ^ (y)) >> 1))
// #define MIDPOINT_FLOOR(x, y) (((x) >> 1) + ((y) >> 1) + ((x) & (y) & 1))
// #define MIDPOINT_FLOOR(x, y) (MIN(x, y) + ABS(x / 2 - y / 2))
/*
typedef struct {
    int result;
    bool flag;
} Checked;

typedef struct {
    uint result;
    bool flag;
} UChecked;
*/
typedef struct {
    int min, max;
} Minmax;

typedef struct {
    uint min, max;
} UMinmax;

typedef struct {
    long min, max;
} LMinmax;

typedef struct {
    ulong min, max;
} UlMinmax;

typedef struct {
    llong min, max;
} LlMinmax;

typedef struct {
    ullong min, max;
} UllMinmax;

typedef struct {
    intmax_t min, max;
} ImaxMinmax;

typedef struct {
    uintmax_t min, max;
} UmaxMinmax;

#define abs(x) TYPE_GENERIC_SIGNED_INTEGER_1(abs, x)
#define div(x, y) TYPE_GENERIC_SIGNED_INTEGER_2(div, x, y)

inline uint absDiff(register const int x, register const int y) {
    return x < y ? (uint) y - (uint) x : (uint) x - (uint) y;
}

inline uint uabsDiff(register const uint x, register const uint y) {
    return ABS_DIFF(x, y);
}

inline ulong labsDiff(register const long x, register const long y) {
    return x < y ? (ulong) y - (ulong) x : (ulong) x - (ulong) y;
}

inline ulong ulabsDiff(register const ulong x, register const ulong y) {
    return ABS_DIFF(x, y);
}

inline ullong llabsDiff(register const llong x, register const llong y) {
    return x < y ? (ullong) y - (ullong) x : (ullong) x - (ullong) y;
}

inline ullong ullabsDiff(register const ullong x, register const ullong y) {
    return ABS_DIFF(x, y);
}

inline uintmax_t imaxabsDiff(
    register const intmax_t x,
    register const intmax_t y
) {
    return x < y
        ? (uintmax_t) y - (uintmax_t) x
        : (uintmax_t) x - (uintmax_t) y;
}

inline uintmax_t umaxabsDiff(
    register const uintmax_t x,
    register const uintmax_t y
) {
    return ABS_DIFF(x, y);
}

#define absDiff(x, y) TYPE_GENERIC_INTEGER_2(absDiff, x, y)

inline int ceilDiv(register const int x, register const int y) {
    assert(y != 0);
    return CEIL_DIV(x, y);
}

inline uint uceilDiv(register const uint x, register const uint y) {
    assert(y != 0U);
    return x / y + (x % y != 0U);
}

inline long lceilDiv(register const long x, register const long y) {
    assert(y != 0L);
    return CEIL_DIV(x, y);
}

inline ulong ulceilDiv(register const ulong x, register const ulong y) {
    assert(y != 0UL);
    return x / y + (x % y != 0UL);
}

inline llong llceilDiv(register const llong x, register const llong y) {
    assert(y != 0LL);
    return CEIL_DIV(x, y);
}

inline ullong ullceilDiv(register const ullong x, register const ullong y) {
    assert(y != 0ULL);
    return x / y + (x % y != 0ULL);
}

inline intmax_t imaxceilDiv(
    register const intmax_t x,
    register const intmax_t y
) {
    assert(y != INTMAX_C(0));
    return CEIL_DIV(x, y);
}

inline uintmax_t umaxceilDiv(
    register const uintmax_t x,
    register const uintmax_t y
) {
    assert(y != UINTMAX_C(0));
    return x / y + (x % y != UINTMAX_C(0));
}

#define ceilDiv(x, y) TYPE_GENERIC_INTEGER_2(ceilDiv, x, y)

inline int ceilMod(register const int x, register const int y) {
    assert(y != 0);
    register const int mod = x % y;
    return isSameSign(x, y) && mod != 0 ? mod - y : mod;
    // return !isSameSign(x, y) || mod == 0 ? mod : mod - y;
}

inline long lceilMod(register const long x, register const long y) {
    assert(y != 0L);
    register const long mod = x % y;
    return isSameSign(x, y) && mod != 0L ? mod - y : mod;
    // return !isSameSign(x, y) || mod == 0L ? mod : mod - y;
}

inline llong llceilMod(register const llong x, register const llong y) {
    assert(y != 0LL);
    register const llong mod = x % y;
    return isSameSign(x, y) && mod != 0LL ? mod - y : mod;
    // return !isSameSign(x, y) || mod == 0LL ? mod : mod - y;
}

inline intmax_t imaxceilMod(
    register const intmax_t x,
    register const intmax_t y
) {
    assert(y != INTMAX_C(0));
    register const intmax_t mod = x % y;
    return isSameSign(x, y) && mod != INTMAX_C(0) ? mod - y : mod;
    // return !isSameSign(x, y) || mod == INTMAX_C(0) ? mod : mod - y;
}

#define ceilMod(x, y) TYPE_GENERIC_SIGNED_INTEGER_2(ceilMod, x, y)

inline int clamp(
    register const int x,
    register const int a,
    register const int b
) {
    assert(a <= b);
    return CLAMP(x, a, b);
}

inline uint uclamp(
    register const uint x,
    register const uint a,
    register const uint b
) {
    assert(a <= b);
    return CLAMP(x, a, b);
}

inline long lclamp(
    register const long x,
    register const long a,
    register const long b
) {
    assert(a <= b);
    return CLAMP(x, a, b);
}

inline ulong ulclamp(
    register const ulong x,
    register const ulong a,
    register const ulong b
) {
    assert(a <= b);
    return CLAMP(x, a, b);
}

inline llong llclamp(
    register const llong x,
    register const llong a,
    register const llong b
) {
    assert(a <= b);
    return CLAMP(x, a, b);
}

inline ullong ullclamp(
    register const ullong x,
    register const ullong a,
    register const ullong b
) {
    assert(a <= b);
    return CLAMP(x, a, b);
}

inline intmax_t imaxclamp(
    register const intmax_t x,
    register const intmax_t a,
    register const intmax_t b
) {
    assert(a <= b);
    return CLAMP(x, a, b);
}

inline uintmax_t umaxclamp(
    register const uintmax_t x,
    register const uintmax_t a,
    register const uintmax_t b
) {
    assert(a <= b);
    return CLAMP(x, a, b);
}

#define clamp(x, a, b) TYPE_GENERIC_INTEGER_3(clamp, x, a, b)

inline int compare(
    register const int x,
    register const int y
) {
    return COMPARE(x, y);
}

inline int ucompare(
    register const uint x,
    register const uint y
) {
    return COMPARE(x, y);
}

inline int lcompare(
    register const long x,
    register const long y
) {
    return COMPARE(x, y);
}

inline int ulcompare(
    register const ulong x,
    register const ulong y
) {
    return COMPARE(x, y);
}

inline int llcompare(
    register const llong x,
    register const llong y
) {
    return COMPARE(x, y);
}

inline int ullcompare(
    register const ullong x,
    register const ullong y
) {
    return COMPARE(x, y);
}

inline int imaxcompare(
    register const intmax_t x,
    register const intmax_t y
) {
    return COMPARE(x, y);
}

inline int umaxcompare(
    register const uintmax_t x,
    register const uintmax_t y
) {
    return COMPARE(x, y);
}

#define compare(x, y) TYPE_GENERIC_INTEGER_2(compare, x, y)

inline uint dim(register const int x, register const int y) {
    return x > y ? (uint) x - (uint) y : 0U;
}

inline uint udim(register const uint x, register const uint y) {
    return DIM(x, y);
}

inline ulong ldim(register const long x, register const long y) {
    return x > y ? (ulong) x - (ulong) y : 0UL;
}

inline ulong uldim(register const ulong x, register const ulong y) {
    return DIM(x, y);
}

inline ullong lldim(register const llong x, register const llong y) {
    return x > y ? (ullong) x - (ullong) y : 0ULL;
}

inline ullong ulldim(register const ullong x, register const ullong y) {
    return DIM(x, y);
}

inline uintmax_t imaxdim(
    register const intmax_t x,
    register const intmax_t y
) {
    return x > y ? (uintmax_t) x - (uintmax_t) y : UINTMAX_C(0);
}

inline uintmax_t umaxdim(
    register const uintmax_t x,
    register const uintmax_t y
) {
    return DIM(x, y);
}

inline int euclidDiv(register const int x, register const int y) {
    assert(y != 0);
    return EUCLID_DIV(x, y);
}

inline uint ueuclidDiv(register const uint x, register const uint y) {
    assert(y != 0U);
    return x / y;
}

inline long leuclidDiv(register const long x, register const long y) {
    assert(y != 0L);
    return EUCLID_DIV(x, y);
}

inline ulong uleuclidDiv(register const ulong x, register const ulong y) {
    assert(y != 0UL);
    return x / y;
}

inline llong lleuclidDiv(register const llong x, register const llong y) {
    assert(y != 0LL);
    return EUCLID_DIV(x, y);
}

inline ullong ulleuclidDiv(register const ullong x, register const ullong y) {
    assert(y != 0ULL);
    return x / y;
}

inline intmax_t imaxeuclidDiv(
    register const intmax_t x,
    register const intmax_t y
) {
    assert(y != INTMAX_C(0));
    return EUCLID_DIV(x, y);
}

inline uintmax_t umaxeuclidDiv(
    register const uintmax_t x,
    register const uintmax_t y
) {
    assert(y != UINTMAX_C(0));
    return x / y;
}

inline int euclidMod(register const int x, register const int y) {
    assert(y != 0);
    return EUCLID_MOD(x, y);
}

inline uint ueuclidMod(register const uint x, register const uint y) {
    assert(y != 0U);
    return x % y;
}

inline long leuclidMod(register const long x, register const long y) {
    assert(y != 0L);
    return EUCLID_MOD(x, y);
}

inline ulong uleuclidMod(register const ulong x, register const ulong y) {
    assert(y != 0UL);
    return x % y;
}

inline llong lleuclidMod(register const llong x, register const llong y) {
    assert(y != 0LL);
    return EUCLID_MOD(x, y);
}

inline ullong ulleuclidMod(register const ullong x, register const ullong y) {
    assert(y != 0ULL);
    return x % y;
}

inline intmax_t imaxeuclidMod(
    register const intmax_t x,
    register const intmax_t y
) {
    assert(y != INTMAX_C(0));
    return EUCLID_MOD(x, y);
}

inline uintmax_t umaxeuclidMod(
    register const uintmax_t x,
    register const uintmax_t y
) {
    assert(y != UINTMAX_C(0));
    return x % y;
}

inline int floorDiv(register const int x, register const int y) {
    assert(y != 0);
    return FLOOR_DIV(x, y);
}

inline uint ufloorDiv(register const uint x, register const uint y) {
    assert(y != 0U);
    return x / y;
}

inline long lfloorDiv(register const long x, register const long y) {
    assert(y != 0L);
    return FLOOR_DIV(x, y);
}

inline ulong ulfloorDiv(register const ulong x, register const ulong y) {
    assert(y != 0UL);
    return x / y;
}

inline llong llfloorDiv(register const llong x, register const llong y) {
    assert(y != 0LL);
    return FLOOR_DIV(x, y);
}

inline ullong ullfloorDiv(register const ullong x, register const ullong y) {
    assert(y != 0ULL);
    return x / y;
}

inline intmax_t imaxfloorDiv(
    register const intmax_t x,
    register const intmax_t y
) {
    assert(y != INTMAX_C(0));
    return FLOOR_DIV(x, y);
}

inline uintmax_t umaxfloorDiv(
    register const uintmax_t x,
    register const uintmax_t y
) {
    assert(y != UINTMAX_C(0));
    return x / y;
}

inline int floorMod(register const int x, register const int y) {
    assert(y != 0);
    return FLOOR_MOD(x, y);
}

inline uint ufloorMod(register const uint x, register const uint y) {
    assert(y != 0U);
    return x % y;
}

inline long lfloorMod(register const long x, register const long y) {
    assert(y != 0L);
    return FLOOR_MOD(x, y);
}

inline ulong ulfloorMod(register const ulong x, register const ulong y) {
    assert(y != 0UL);
    return x % y;
}

inline llong llfloorMod(register const llong x, register const llong y) {
    assert(y != 0LL);
    return FLOOR_MOD(x, y);
}

inline ullong ullfloorMod(register const ullong x, register const ullong y) {
    assert(y != 0ULL);
    return x % y;
}

inline intmax_t imaxfloorMod(
    register const intmax_t x,
    register const intmax_t y
) {
    assert(y != INTMAX_C(0));
    return FLOOR_MOD(x, y);
}

inline uintmax_t umaxfloorMod(
    register const uintmax_t x,
    register const uintmax_t y
) {
    assert(y != UINTMAX_C(0));
    return x % y;
}

inline bool inClosedRange(
    register const int x,
    register const int a,
    register const int b
) {
    assert(a <= b);
    return IN_CLOSED_RANGE(x, a, b);
}

inline bool uinClosedRange(
    register const uint x,
    register const uint a,
    register const uint b
) {
    assert(a <= b);
    return IN_CLOSED_RANGE(x, a, b);
}

inline bool linClosedRange(
    register const long x,
    register const long a,
    register const long b
) {
    assert(a <= b);
    return IN_CLOSED_RANGE(x, a, b);
}

inline bool ulinClosedRange(
    register const ulong x,
    register const ulong a,
    register const ulong b
) {
    assert(a <= b);
    return IN_CLOSED_RANGE(x, a, b);
}

inline bool llinClosedRange(
    register const llong x,
    register const llong a,
    register const llong b
) {
    assert(a <= b);
    return IN_CLOSED_RANGE(x, a, b);
}

inline bool ullinClosedRange(
    register const ullong x,
    register const ullong a,
    register const ullong b
) {
    assert(a <= b);
    return IN_CLOSED_RANGE(x, a, b);
}

inline bool imaxinClosedRange(
    register const intmax_t x,
    register const intmax_t a,
    register const intmax_t b
) {
    assert(a <= b);
    return IN_CLOSED_RANGE(x, a, b);
}

inline bool umaxinClosedRange(
    register const uintmax_t x,
    register const uintmax_t a,
    register const uintmax_t b
) {
    assert(a <= b);
    return IN_CLOSED_RANGE(x, a, b);
}

#define inClosedRange(x, a, b) TYPE_GENERIC_INTEGER_3(inClosedRange, x, a, b)

inline bool inRange(
    register const int x,
    register const int a,
    register const int b
) {
    assert(a <= b);
    return IN_RANGE(x, a, b);
}

inline bool uinRange(
    register const uint x,
    register const uint a,
    register const uint b
) {
    assert(a <= b);
    return IN_RANGE(x, a, b);
}

inline bool linRange(
    register const long x,
    register const long a,
    register const long b
) {
    assert(a <= b);
    return IN_RANGE(x, a, b);
}

inline bool ulinRange(
    register const ulong x,
    register const ulong a,
    register const ulong b
) {
    assert(a <= b);
    return IN_RANGE(x, a, b);
}

inline bool llinRange(
    register const llong x,
    register const llong a,
    register const llong b
) {
    assert(a <= b);
    return IN_RANGE(x, a, b);
}

inline bool ullinRange(
    register const ullong x,
    register const ullong a,
    register const ullong b
) {
    assert(a <= b);
    return IN_RANGE(x, a, b);
}

inline bool imaxinRange(
    register const intmax_t x,
    register const intmax_t a,
    register const intmax_t b
) {
    assert(a <= b);
    return IN_RANGE(x, a, b);
}

inline bool umaxinRange(
    register const uintmax_t x,
    register const uintmax_t a,
    register const uintmax_t b
) {
    assert(a <= b);
    return IN_RANGE(x, a, b);
}

#define inRange(x, a, b) TYPE_GENERIC_INTEGER_3(inRange, x, a, b)

inline bool isEven(register const int x) {
    return (x & 1) == 0;
}

inline bool uisEven(register const uint x) {
    return (x & 1U) == 0U;
}

inline bool lisEven(register const long x) {
    return (x & 1L) == 0L;
}

inline bool ulisEven(register const ulong x) {
    return (x & 1UL) == 0UL;
}

inline bool llisEven(register const llong x) {
    return (x & 1LL) == 0LL;
}

inline bool ullisEven(register const ullong x) {
    return (x & 1ULL) == 0ULL;
}

inline bool imaxisEven(register const intmax_t x) {
    return (x & INTMAX_C(1)) == INTMAX_C(0);
}

inline bool umaxisEven(register const uintmax_t x) {
    return (x & UINTMAX_C(1)) == UINTMAX_C(0);
}

#define isEven(x) TYPE_GENERIC_INTEGER_1(isEven, x)

inline bool isOdd(register const int x) {
    return (x & 1) == 1;
}

inline bool uisOdd(register const uint x) {
    return (x & 1U) == 1U;
}

inline bool lisOdd(register const long x) {
    return (x & 1L) == 1L;
}

inline bool ulisOdd(register const ulong x) {
    return (x & 1UL) == 1UL;
}

inline bool llisOdd(register const llong x) {
    return (x & 1LL) == 1LL;
}

inline bool ullisOdd(register const ullong x) {
    return (x & 1ULL) == 1ULL;
}

inline bool imaxisOdd(register const intmax_t x) {
    return (x & INTMAX_C(1)) == INTMAX_C(1);
}

inline bool umaxisOdd(register const uintmax_t x) {
    return (x & UINTMAX_C(1)) == UINTMAX_C(1);
}

#define isOdd(x) TYPE_GENERIC_INTEGER_1(isOdd, x)

inline bool isSameSign(register const int x, register const int y) {
    return (x ^ y) >= 0;
}

inline bool lisSameSign(register const long x, register const long y) {
    return (x ^ y) >= 0L;
}

inline bool llisSameSign(register const llong x, register const llong y) {
    return (x ^ y) >= 0LL;
}

inline bool imaxisSameSign(
    register const intmax_t x,
    register const intmax_t y
) {
    return (x ^ y) >= INTMAX_C(0);
}

#define isSameSign(x, y) TYPE_GENERIC_SIGNED_INTEGER_2(isSameSign, x, y)

inline int max(register const int x, register const int y) {
    return MAX(x, y);
}

inline uint umax(register const uint x, register const uint y) {
    return MAX(x, y);
}

inline long lmax(register const long x, register const long y) {
    return MAX(x, y);
}

inline ulong ulmax(register const ulong x, register const ulong y) {
    return MAX(x, y);
}

inline llong llmax(register const llong x, register const llong y) {
    return MAX(x, y);
}

inline ullong ullmax(register const ullong x, register const ullong y) {
    return MAX(x, y);
}

inline intmax_t imaxmax(
    register const intmax_t x,
    register const intmax_t y
) {
    return MAX(x, y);
}

inline uintmax_t umaxmax(
    register const uintmax_t x,
    register const uintmax_t y
) {
    return MAX(x, y);
}

#define max(x, y) TYPE_GENERIC_INTEGER_2(max, x, y)

inline int min(register const int x, register const int y) {
    return MIN(x, y);
}

inline uint umin(register const uint x, register const uint y) {
    return MIN(x, y);
}

inline long lmin(register const long x, register const long y) {
    return MIN(x, y);
}

inline ulong ulmin(register const ulong x, register const ulong y) {
    return MIN(x, y);
}

inline llong llmin(register const llong x, register const llong y) {
    return MIN(x, y);
}

inline ullong ullmin(register const ullong x, register const ullong y) {
    return MIN(x, y);
}

inline intmax_t imaxmin(
    register const intmax_t x,
    register const intmax_t y
) {
    return MIN(x, y);
}

inline uintmax_t umaxmin(
    register const uintmax_t x,
    register const uintmax_t y
) {
    return MIN(x, y);
}

#define min(x, y) TYPE_GENERIC_INTEGER_2(min, x, y)

inline Minmax minmax(register const int x, register const int y) {
    return x < y
        ? (Minmax) { .min = x, .max = y }
        : (Minmax) { .min = y, .max = x };
}

inline UMinmax uminmax(register const uint x, register const uint y) {
    return x < y
        ? (UMinmax) { .min = x, .max = y }
        : (UMinmax) { .min = y, .max = x };
}

inline LMinmax lminmax(register const long x, register const long y) {
    return x < y
        ? (LMinmax) { .min = x, .max = y }
        : (LMinmax) { .min = y, .max = x };
}

inline UlMinmax ulminmax(register const ulong x, register const ulong y) {
    return x < y
        ? (UlMinmax) { .min = x, .max = y }
        : (UlMinmax) { .min = y, .max = x };
}

inline LlMinmax llminmax(register const llong x, register const llong y) {
    return x < y
        ? (LlMinmax) { .min = x, .max = y }
        : (LlMinmax) { .min = y, .max = x };
}

inline UllMinmax ullminmax(register const ullong x, register const ullong y) {
    return x < y
        ? (UllMinmax) { .min = x, .max = y }
        : (UllMinmax) { .min = y, .max = x };
}

inline ImaxMinmax imaxminmax(
    register const intmax_t x,
    register const intmax_t y
) {
    return x < y
        ? (ImaxMinmax) { .min = x, .max = y }
        : (ImaxMinmax) { .min = y, .max = x };
}

inline UmaxMinmax umaxminmax(
    register const uintmax_t x,
    register const uintmax_t y
) {
    return x < y
        ? (UmaxMinmax) { .min = x, .max = y }
        : (UmaxMinmax) { .min = y, .max = x };
}

#define minmax(x, y) TYPE_GENERIC_INTEGER_2(minmax, x, y)

inline int negativeAbs(register const int x) {
    return x > 0 ? -x : x;
}

inline long lnegativeAbs(register const long x) {
    return x > 0L ? -x : x;
}

inline llong llnegativeAbs(register const llong x) {
    return x > 0LL ? -x : x;
}

inline intmax_t imaxnegativeAbs(register const intmax_t x) {
    return x > INTMAX_C(0) ? -x : x;
}

inline int icopysign(register const int x, register const int y) {
    assert(x != INT_MIN || y < 0);
    return y < 0 ? negativeAbs(x) : abs(x);
}

inline long licopysign(register const long x, register const long y) {
    assert(x != LONG_MIN || y < 0L);
    return y < 0L ? negativeAbs(x) : abs(x);
}

inline llong llicopysign(register const llong x, register const llong y) {
    assert(x != LLONG_MIN || y < 0LL);
    return y < 0LL ? negativeAbs(x) : abs(x);
}

inline intmax_t imaxicopysign(
    register const intmax_t x,
    register const intmax_t y
) {
    assert(x != INTMAX_MIN || y < INTMAX_C(0));
    return y < INTMAX_C(0) ? negativeAbs(x) : abs(x);
}

inline int sign(register const int x) {
    return compare(x, 0);
}

inline int lsign(register const long x) {
    return compare(x, 0L);
}

inline int llsign(register const llong x) {
    return compare(x, 0LL);
}

inline int imaxsign(register const intmax_t x) {
    return compare(x, INTMAX_C(0));
}

inline uint unsignedAbs(register const int x) {
    return x < 0 ? -(uint) x : (uint) x;
}

inline ulong lunsignedAbs(register const long x) {
    return x < 0L ? -(ulong) x : (ulong) x;
}

inline ullong llunsignedAbs(register const llong x) {
    return x < 0LL ? -(ullong) x : (ullong) x;
}

inline uintmax_t imaxunsignedAbs(register const intmax_t x) {
    return x < INTMAX_C(0) ? -(uintmax_t) x : (uintmax_t) x;
}

#define unsignedAbs(x) TYPE_GENERIC_SIGNED_INTEGER_1(unsignedAbs, x)

#define dim(x, y) TYPE_GENERIC_INTEGER_2(dim, x, y)
#define euclidDiv(x, y) TYPE_GENERIC_INTEGER_2(euclidDiv, x, y)
#define euclidMod(x, y) TYPE_GENERIC_INTEGER_2(euclidMod, x, y)
#define floorDiv(x, y) TYPE_GENERIC_INTEGER_2(floorDiv, x, y)
#define floorMod(x, y) TYPE_GENERIC_INTEGER_2(floorMod, x, y)
#define icopysign(x, y) TYPE_GENERIC_SIGNED_INTEGER_2(icopysign, x, y)
#define negativeAbs(x) TYPE_GENERIC_SIGNED_INTEGER_1(negativeAbs, x)
#define sign(x) TYPE_GENERIC_SIGNED_INTEGER_1(sign, x)

#endif // C_COMMONS_ARITHMETIC_H
