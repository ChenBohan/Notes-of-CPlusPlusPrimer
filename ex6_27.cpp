// Exercise 6.27: Write a function that takes an initializer_list<int>
// and produces the sum of the elements in the list.

#include <initializer_list>
#include <iostream>
using namespace std;

int sum(initializer_list<int> il) {
    int sum = 0;
    for (auto beg = il.begin(); beg != il.end(); ++beg) {
        sum += *beg;
    }
    return sum;
}


int main() {
    cout << sum({1, 100, 2}) << endl;
}