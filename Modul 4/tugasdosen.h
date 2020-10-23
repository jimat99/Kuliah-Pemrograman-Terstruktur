#ifndef TUGASDOSEN_H_INCLUDED
#define TUGASDOSEN_H_INCLUDED

#include <iostream>

using namespace std;

int Fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

#endif // TUGASDOSEN_H_INCLUDED
