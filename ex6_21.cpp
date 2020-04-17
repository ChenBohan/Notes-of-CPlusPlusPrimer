// Exercise 6.21: Write a function that takes an int and a pointer to an int
// and returns the larger of the int value or the value to which the pointer
// points. What type should you use for the pointer?

#include <iostream>
using namespace std;

int larger(int, int*);

int main() {
    int a = 10, b = 20;
    int *p = &b;
    cout << larger(a, p) << endl;
    return 0;
}

int larger(int a, int* p) {
    int b = *p;
    return max(a, b);
}