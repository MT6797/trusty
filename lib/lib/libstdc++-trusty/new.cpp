/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <new>
#include <stdlib.h>

const std::nothrow_t std::nothrow = {};

void* operator new(size_t size) {
    void* p = malloc(size);
    return p;
}

void* operator new[](size_t size) {
    void* p = malloc(size);
    return p;
}

void  operator delete(void* ptr) {
    free(ptr);
}

void  operator delete[](void* ptr) {
    free(ptr);
}

void* operator new(size_t size, const std::nothrow_t&) {
    return malloc(size);
}

void* operator new[](size_t size, const std::nothrow_t&) {
    return malloc(size);
}

void  operator delete(void* ptr, const std::nothrow_t&) {
    free(ptr);
}

void  operator delete[](void* ptr, const std::nothrow_t&) {
    free(ptr);
}
