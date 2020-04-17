// Exercise 6.22: Write a function to swap two int pointers.

#include <iostream>
using namespace std;

void swap(int*, int*);

int main() {
    int a = 10, b = 20;
    int *p = &a;
    int *q = &b;
    swap(p, q);
    cout << a << b << endl;
    return 0;
}

void swap(int* p, int* q) {
    int tmp = *p;
    *p = *q;
    *q = tmp;
}