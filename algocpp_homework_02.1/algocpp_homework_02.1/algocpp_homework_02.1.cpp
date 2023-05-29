
#include <iostream>

unsigned int fib(unsigned int n) 
{
    if (n == 2 || n == 1) return 1;
    if (n == 0) return 0;
    return fib (n - 2) + fib(n - 1);
}

int main()
{
    std::cout << "fib = " << fib(6) << std::endl;
    return 0;
}                                              