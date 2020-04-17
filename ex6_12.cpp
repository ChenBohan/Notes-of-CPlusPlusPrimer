// Exercise 6.12: Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210)
// to use references instead of pointers to swap the value of two ints. Which
// version do you think would be easier to use and why?

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    auto tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int x = 5, y = 10;
    swap(x, y);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    return 0;
}