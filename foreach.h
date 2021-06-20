#pragma once
#if __cplusplus >= 201703L
#include <tuple>

// Foreach loop in C++. The variable's type is deduced from the first element of the collection being iterated. Works only in C++ 17 and up.
#define foreach(var,collection) for (auto [i, var] = std::tuple{0, collection[0]}; i < sizeof(collection) / sizeof(*collection); i++, var = collection[i])
#else
#error foreach is only supported in C++ 17 and up! Will add support for lower versions in the future.
#endif