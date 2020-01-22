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

