// Exercise 6.3: Write and test your own version of fact .

#include <iostream>
using namespace std;

int fact(int val)
{
    int result = 1;
    while(val > 0)
    {
        result *= val--;
    }
    return result;
}

int main()
{
    int x = 5;
    cout<<"result: "<<fact(x)<<endl;
    return 0;
}