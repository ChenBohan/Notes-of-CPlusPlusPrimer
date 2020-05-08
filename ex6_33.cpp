// Exercise 6.33: Write a recursive function to print the contents of a vector.

#include <vector>
#include <iostream>
using namespace std;

void print(vector<int>::iterator beg, vector<int>::iterator end) {
    if (beg != end) {
        cout << *beg << " ";
        print(std::next(beg), end);
    }
}

int main() {
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(vec.begin(), vec.end());
}