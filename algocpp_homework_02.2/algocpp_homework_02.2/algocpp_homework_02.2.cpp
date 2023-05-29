// algocpp_homework_02.2.cpp 

#include <iostream>

unsigned int fib(int n, unsigned int* arr) 
{
    if (n == 1 || n == 2) 
    {
        arr[n] = 1;
        return 1;
    };
    if (n == 0) return 0;
    if (arr[n] != 0) return arr[n];
    else
    {
        arr[n]= fib(n - 2, arr) + fib(n - 1, arr);
    }
    return fib(n - 2, arr) + fib(n - 1, arr);   
}

int main()
{
    int n = 8;
    unsigned int* arr = new unsigned int [n+1] {};
    std::cout << "fib"<<" [" << n << "] = " << fib(n, arr) << std::endl;
    delete [] arr;
    return 0;
}