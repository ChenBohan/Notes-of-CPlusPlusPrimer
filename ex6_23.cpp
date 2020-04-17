// Exercise 6.23: Write your own versions of each of the print functions
// presented in this section. Call each of these functions to print i and j
// defined as follows:
// int i = 0, j[2] = {0, 1};

#include <iostream>
using namespace std;

void print(int* const p) {
    if (p) {
        cout << *p << endl;
    }
}

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

int main() {
    int i = 0, j[2] = {0, 1};
    char ch[5] = "pezy";
    print(ch);
    print(begin(j), end(j));
    print(&i);
    print(j, end(j) - begin(j));
    print(const_cast<const int(&)[2]>(j));
    return 0;
}