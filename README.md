# CppPrimer-06-Functions
Solutions for Chapter 6. Functions exercises of C++ Primer 5th.

## Exercise 6.1

What is the difference between a parameter and an argument?

- **Parameters**: Local variable declared inside the function parameter list. they are initialized by the **arguments** provided in the each function call.

- **Arguments**: Values supplied in a function call that are used to initialize the function's **parameters**.

## Exercise 6.5

Write a function to return the absolute value of its argument.

```cpp
template <typename T>
T abs(T i)
{
    return i >= 0 ? i : -i;
}
```

## Exercise 6.6

Explain the differences between a parameter, a local variable, and a local static variable. 

- **local variable**: Variables defined inside a block;

- **parameter**: Local variables declared inside the function parameter list

- **local static variable**: local static variable（object）is initialized before the first time execution passes through the object’s definition. Local statics are not destroyed when a function ends, they are destroyed when the program terminates.

## Exercise 6.7

Write a function that returns 0 when it is first called and then generates numbers in sequence each time it is called again.

```cpp
size_t generate()
{
    static size_t n = 0;
    return n++;
}
```

## Exercise 6.10

Using pointers, write a function to swap the values of two int s. Test the function by calling it and printing the swapped values.
```cpp
void swap(int *a, int *b)
{
    auto tmp = *a;
    *a = *b;
    *b = tmp;
}
```

## Exercise 6.23

Write your own versions of each of the print functions presented in this section. Call each of these functions to print i and j defined as follows: int i = 0, j[2] = {0, 1};

```cpp
// Using a Marker to Specify the Extent of an Array
//   Functions that deal with C-style strings stop
//   processing the array when they see a null character
void print(const char* p) {
    if (p) {
        while (*p) {
            cout << *p++ << " ";
        }
        cout << endl;
    }
}

// Using the Standard Library Conventions
//   to pass pointers to the first and one past the last element in the array.
//   This approach is inspired by techniques used in the standard library.
void print(const int* begin, const int* end) {
    while (begin != end) {
        cout << *begin++ << " ";
    }
    cout << endl;
}

// Explicitly Passing a Size Parameter
//    to define a second parameter that indicates the size of the arrays
void print(const int a[], size_t size) {
    for (size_t i = 0; i != size; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

// When a function does not need write access to the array elements, the
// array parameter should be a pointer to const

// Array Reference Parameters
//   define a parameter that is a reference to an array
void print(const int (&arr)[2]) {
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
```

## Exercise 6.24

```
Arrays have two special properties that affect how we define and use functions that operate on arrays: We cannot copy an array, and when we use an array it is (usually) converted to a pointer.
```

So we cannot pass an array by value, and when we pass an array to a function, we are actually passing a pointer to the array's first element.

In this question, const int ia[10] is actually same as const int*, and the size of the array is irrelevant. we can pass const int ia[3] or const int ia[255], there are no differences. If we want to pass an array which size is ten, we should use reference like that:

```cpp
void print10(const int (&ia)[10]) { /*...*/ }
```
see more discusses at http://stackoverflow.com/questions/26530659/confused-about-array-parameters
