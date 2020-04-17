// Exercise 6.11: Write and test your own version of reset that takes a reference.

#include <iostream>
using namespace std;

void reset(int &i) {
    i = 0;
}

int main() {
    int x = 42;
    reset(x);
    cout << x << endl;
    return 0;
}