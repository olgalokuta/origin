#include <iostream>

void fib(int n) {
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; ++i) {
        std::cout << a << std::endl;
        int temp = a;
        a += b;
        b = temp;
    } 
}

int main() {
    fib(10);
    return 0;
}
