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
#include <c_commons/heap.h> // *Heap
/*
void makeHeap(
    register const void *array,
    register const size_t length,
    register const size_t size,
    register int (* const compare)(const void *, const void *)
) {
    for (register size_t index = 1; index <= length; ++index)
        push(array, index, compare);
}

void popHeap(
    register const void *array,
    register const size_t length,
    register const size_t size,
    register int (* const compare)(const void *, const void *)
) {
    elemSwap(array, 0, --length, size);
    register const size_t half = length >> 1U;
    for (register size_t parent = 0U, child = 0U; parent < half; parent = child) {
        child += child + 1;
        if (child + 1 < length &&
            elemCompare(array, child, child + 1, size, compare) < 0)
            ++child;
        if (compare(array[parent], array[child]) >= 0)
            break;
        elemSwap(array, parent, child, size);
    }
}

void pushHeap(
    register const void *array,
    register size_t length,
    register const size_t size,
    register int (* const compare)(const void *, const void *)
) {
    --length;
    for (register size_t parent; length != 0U; length = parent) {
        parent = (length - 1U) >> 1U;
        if (compare(array[parent], array[length]) >= 0)
            break;
        elemSwap(array, parent, length, size);
    }
}

void sortHeap(
    register const void *array,
    register size_t length,
    register const size_t size,
    register int (* const compare)(const void *, const void *)
) {
    for (; length != 0U; --length)
        pop(array, length, size, compare);
}
*/
