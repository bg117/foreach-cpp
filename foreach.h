#pragma once

// Foreach loop in C++. The variable's type is deduced from the first element of the collection being iterated. Works only in C++ 17 and up.
#define foreach(item, array)                         \
    for (int keep = 1,                               \
             count = 0,                              \
             size = sizeof(array) / sizeof (*array); \
         keep && count != size;                      \
         keep = !keep, count++)                      \
         for (item = array[count]; keep; keep = !keep)
