//
//  main.cpp
//  Pointers Basics(Initializing and & operator)
//
//  Created by Amartya Vibhu on 23/03/22.
//

#include <iostream>

using namespace std;

int main() {
    int *p;
    cout<<"Value of p is: "<<p<<endl;
    cout<<"Address of p is: "<<&p<<endl;
    cout<<"sizeof of p is: "<<sizeof p<<endl;
    p = nullptr;
    cout<<"Value of p is: "<<p<<endl;
    
    return 0;
}
