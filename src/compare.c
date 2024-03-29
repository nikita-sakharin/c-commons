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
#include <c_commons/compare.h> // cmpGreater*, cmpLess*, is*

extern inline int cmpGreaterChar(const void *, const void *);
extern inline int cmpGreaterSchar(const void *, const void *);
extern inline int cmpGreaterUchar(const void *, const void *);
extern inline int cmpGreaterShrt(const void *, const void *);
extern inline int cmpGreaterUshrt(const void *, const void *);
extern inline int cmpGreaterInt(const void *, const void *);
extern inline int cmpGreaterUint(const void *, const void *);
extern inline int cmpGreaterLong(const void *, const void *);
extern inline int cmpGreaterUlong(const void *, const void *);
extern inline int cmpGreaterLlong(const void *, const void *);
extern inline int cmpGreaterUllong(const void *, const void *);
extern inline int cmpGreaterIntmax(const void *, const void *);
extern inline int cmpGreaterUintmax(const void *, const void *);
extern inline int cmpGreaterFlt(const void *, const void *);
extern inline int cmpGreaterDbl(const void *, const void *);
extern inline int cmpGreaterLdbl(const void *, const void *);

extern inline int cmpLessChar(const void *, const void *);
extern inline int cmpLessSchar(const void *, const void *);
extern inline int cmpLessUchar(const void *, const void *);
extern inline int cmpLessShrt(const void *, const void *);
extern inline int cmpLessUshrt(const void *, const void *);
extern inline int cmpLessInt(const void *, const void *);
extern inline int cmpLessUint(const void *, const void *);
extern inline int cmpLessLong(const void *, const void *);
extern inline int cmpLessUlong(const void *, const void *);
extern inline int cmpLessLlong(const void *, const void *);
extern inline int cmpLessUllong(const void *, const void *);
extern inline int cmpLessIntmax(const void *, const void *);
extern inline int cmpLessUintmax(const void *, const void *);
extern inline int cmpLessFlt(const void *, const void *);
extern inline int cmpLessDbl(const void *, const void *);
extern inline int cmpLessLdbl(const void *, const void *);

extern inline bool isEqualChar(const void *, const void *);
extern inline bool isEqualSchar(const void *, const void *);
extern inline bool isEqualUchar(const void *, const void *);
extern inline bool isEqualShrt(const void *, const void *);
extern inline bool isEqualUshrt(const void *, const void *);
extern inline bool isEqualInt(const void *, const void *);
extern inline bool isEqualUint(const void *, const void *);
extern inline bool isEqualLong(const void *, const void *);
extern inline bool isEqualUlong(const void *, const void *);
extern inline bool isEqualLlong(const void *, const void *);
extern inline bool isEqualUllong(const void *, const void *);
extern inline bool isEqualIntmax(const void *, const void *);
extern inline bool isEqualUintmax(const void *, const void *);
extern inline bool isEqualFlt(const void *, const void *);
extern inline bool isEqualDbl(const void *, const void *);
extern inline bool isEqualLdbl(const void *, const void *);

extern inline bool isGreaterChar(const void *, const void *);
extern inline bool isGreaterSchar(const void *, const void *);
extern inline bool isGreaterUchar(const void *, const void *);
extern inline bool isGreaterShrt(const void *, const void *);
extern inline bool isGreaterUshrt(const void *, const void *);
extern inline bool isGreaterInt(const void *, const void *);
extern inline bool isGreaterUint(const void *, const void *);
extern inline bool isGreaterLong(const void *, const void *);
extern inline bool isGreaterUlong(const void *, const void *);
extern inline bool isGreaterLlong(const void *, const void *);
extern inline bool isGreaterUllong(const void *, const void *);
extern inline bool isGreaterIntmax(const void *, const void *);
extern inline bool isGreaterUintmax(const void *, const void *);
extern inline bool isGreaterFlt(const void *, const void *);
extern inline bool isGreaterDbl(const void *, const void *);
extern inline bool isGreaterLdbl(const void *, const void *);

extern inline bool isGreaterEqualChar(const void *, const void *);
extern inline bool isGreaterEqualSchar(const void *, const void *);
extern inline bool isGreaterEqualUchar(const void *, const void *);
extern inline bool isGreaterEqualShrt(const void *, const void *);
extern inline bool isGreaterEqualUshrt(const void *, const void *);
extern inline bool isGreaterEqualInt(const void *, const void *);
extern inline bool isGreaterEqualUint(const void *, const void *);
extern inline bool isGreaterEqualLong(const void *, const void *);
extern inline bool isGreaterEqualUlong(const void *, const void *);
extern inline bool isGreaterEqualLlong(const void *, const void *);
extern inline bool isGreaterEqualUllong(const void *, const void *);
extern inline bool isGreaterEqualIntmax(const void *, const void *);
extern inline bool isGreaterEqualUintmax(const void *, const void *);
extern inline bool isGreaterEqualFlt(const void *, const void *);
extern inline bool isGreaterEqualDbl(const void *, const void *);
extern inline bool isGreaterEqualLdbl(const void *, const void *);

extern inline bool isLessChar(const void *, const void *);
extern inline bool isLessSchar(const void *, const void *);
extern inline bool isLessUchar(const void *, const void *);
extern inline bool isLessShrt(const void *, const void *);
extern inline bool isLessUshrt(const void *, const void *);
extern inline bool isLessInt(const void *, const void *);
extern inline bool isLessUint(const void *, const void *);
extern inline bool isLessLong(const void *, const void *);
extern inline bool isLessUlong(const void *, const void *);
extern inline bool isLessLlong(const void *, const void *);
extern inline bool isLessUllong(const void *, const void *);
extern inline bool isLessIntmax(const void *, const void *);
extern inline bool isLessUintmax(const void *, const void *);
extern inline bool isLessFlt(const void *, const void *);
extern inline bool isLessDbl(const void *, const void *);
extern inline bool isLessLdbl(const void *, const void *);

extern inline bool isLessEqualChar(const void *, const void *);
extern inline bool isLessEqualSchar(const void *, const void *);
extern inline bool isLessEqualUchar(const void *, const void *);
extern inline bool isLessEqualShrt(const void *, const void *);
extern inline bool isLessEqualUshrt(const void *, const void *);
extern inline bool isLessEqualInt(const void *, const void *);
extern inline bool isLessEqualUint(const void *, const void *);
extern inline bool isLessEqualLong(const void *, const void *);
extern inline bool isLessEqualUlong(const void *, const void *);
extern inline bool isLessEqualLlong(const void *, const void *);
extern inline bool isLessEqualUllong(const void *, const void *);
extern inline bool isLessEqualIntmax(const void *, const void *);
extern inline bool isLessEqualUintmax(const void *, const void *);
extern inline bool isLessEqualFlt(const void *, const void *);
extern inline bool isLessEqualDbl(const void *, const void *);
extern inline bool isLessEqualLdbl(const void *, const void *);

extern inline bool isNotEqualChar(const void *, const void *);
extern inline bool isNotEqualSchar(const void *, const void *);
extern inline bool isNotEqualUchar(const void *, const void *);
extern inline bool isNotEqualShrt(const void *, const void *);
extern inline bool isNotEqualUshrt(const void *, const void *);
extern inline bool isNotEqualInt(const void *, const void *);
extern inline bool isNotEqualUint(const void *, const void *);
extern inline bool isNotEqualLong(const void *, const void *);
extern inline bool isNotEqualUlong(const void *, const void *);
extern inline bool isNotEqualLlong(const void *, const void *);
extern inline bool isNotEqualUllong(const void *, const void *);
extern inline bool isNotEqualIntmax(const void *, const void *);
extern inline bool isNotEqualUintmax(const void *, const void *);
extern inline bool isNotEqualFlt(const void *, const void *);
extern inline bool isNotEqualDbl(const void *, const void *);
extern inline bool isNotEqualLdbl(const void *, const void *);
