// Exercise 6.10: Using pointers, write a function to swap the values of two
// int s. Test the function by calling it and printing the swapped values.


#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    auto tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int x = 5, y = 10;
    swap(&x, &y);
    cout<<"x: "<< x <<endl;
    cout<<"y: "<< y <<endl;
    return 0;
}