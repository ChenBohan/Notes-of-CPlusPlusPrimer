// Exercise 6.54: Write a declaration for a function that takes two int
// parameters and returns an int, and declare a vector whose elements have
// this function pointer type.

#include <vector>

int func(int a, int b);

// when we apply decltype to a function, it returns a function type, not a pointer to function type.
// We must add a * to indicate that we are returning a pointer, not a function.
using pFunc1 = decltype(func) *;
std::vector<pFunc1> vec1;

typedef decltype(func) *pFunc2;
typedef int(*pFunc2)(int a, int b);     // equivalent type
std::vector<pFunc2> vec2;

using pFunc3 = int (*)(int a, int b);   // pFunc3 is a pointer type
std::vector<pFunc3> vec3;

using pFunc4 = int(int a, int b);       // pFunc4 is a function type, not a pointer
std::vector<pFunc4*> vec4

typedef int(*pFunc5)(int a, int b);
std::vector<pFunc5> vec5;

using pFunc6 = decltype(func);
std::vector<pFunc6*> vec6;