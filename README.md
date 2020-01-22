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

