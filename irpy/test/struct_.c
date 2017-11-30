/*
 * Copyright 2017 Hyperkernel Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct vec3 {
    uint64_t x;
    uint64_t y;
    uint64_t z;
};

struct vec3 p = {0};

uint64_t test(uint64_t x)
{

    p.x = x;
    p.y = p.x + p.x;
    p.z = p.y - x;
    return p.z;
}

int main(int argc, char **argv)
{
    uint64_t res = test(strtoull(argv[1], NULL, 10));
    printf("%zu\n", res);
    return 0;
}