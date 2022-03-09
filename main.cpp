#include <iostream>

int fib(int n) {
    int res;
    if (n == 1) res = 0;
    else if (n == 2 || n == 3) res = 1;
    else res = fib(n - 1) + fib(n - 2);
    return res; 
}

int main() {
	std::cout << fib(10);
	return 0;
}
