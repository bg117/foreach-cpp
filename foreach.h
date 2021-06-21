#pragma once
// Foreach loop in C++.
#define foreach(item, array)                         \
    for (long long int __KEEP__ = 1,                               \
             __COUNT__ = 0,                              \
             __SIZE__ = sizeof(array) / sizeof(array[0]); \
         __KEEP__ && __COUNT__ != __SIZE__;                      \
         __KEEP__ = !__KEEP__, __COUNT__++)                      \
        for (item = array[__COUNT__]; __KEEP__; __KEEP__ = !__KEEP__)
