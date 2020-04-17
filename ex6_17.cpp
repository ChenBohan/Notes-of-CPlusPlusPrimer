// Exercise 6.17: Write a function to determine whether a string contains
// any capital letters. Write a function to change a string to all lowercase. Do
// the parameters you used in these functions have the same type? I f so, why?
// I f not, why not ?

#include <iostream>
#include <string>
using namespace std;

bool any_capital(const string&);
void to_lowercase(string&);

int main() {
    string str("Hello World!");
    cout << any_capital(str) << endl;
    to_lowercase(str);
    cout << str << endl;
    return 0;
}

bool any_capital(const string& str) {
    for (auto s : str) {
        if (isupper(s)) {
            return true;
        }else {
            return false;
        }
    }
}
void to_lowercase(string& str) {
    for (auto &s : str) {
        s = tolower(s);
    }
}