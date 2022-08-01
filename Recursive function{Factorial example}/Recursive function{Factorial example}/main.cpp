//
//  main.cpp
//  Recursive function{Factorial example}
//
//  Created by Amartya Vibhu on 23/03/22.
//

#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long);
unsigned long long factorial(unsigned long long);
unsigned long long factorial(unsigned long long n){
    if (n == 0)
        return 1;                // Base call
    return n * factorial(n-1);   // Recursive call
}

unsigned long long fibonacci(unsigned long long m){
    if (m <= 1)
        return m;
    return fibonacci(m-1) + fibonacci(m-2);
}
int main(){
    cout<<factorial(3)<<endl;
    cout<<factorial(10)<<endl;
    cout<<factorial(20)<<endl;
    cout<<fibonacci(7)<<endl;
    cout<<fibonacci(20)<<endl;
    return 0;
}

