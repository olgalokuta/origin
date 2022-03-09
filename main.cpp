#include <iostream>

int fib(int n) {
    int res;
    if (n <= 2) res = 1;
    else res = fib(n - 1) + fib(n - 2);
    return res; 
}

int main() {
	std::cout << fib(10);
	return 0;
}
