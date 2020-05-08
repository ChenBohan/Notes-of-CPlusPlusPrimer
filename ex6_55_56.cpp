// Exercise 6.55: Write four functions that add, subtract, multiply, and divide
// two int values. Store pointers to these values in your vector from the
// previous exercise.

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

// Exercise 6.56: Call each element in the vector and print their result.

std::vector<decltype(func) *> vec{add, subtract, multiply, divide};
for (auto f : vec)
    std::cout << f(2, 2) << std::endl;