//
//  main.cpp
//  Pointers{Dynamic memory allocation}
//
//  Created by Amartya Vibhu on 24/03/22.
//

#include <iostream>

using namespace std;

int main() {
    int *int_ptr{nullptr};
    int_ptr = new int;
    cout<<int_ptr<<endl;
    
    delete int_ptr;
    
    cout<<"int_ptr after deletion "<<int_ptr<<endl;
    // It will still point to the old allocated address but "delete" will free up the storage
    
    size_t size{0};
    double *temp_ptr{nullptr};
    
    cout<<"How many temps? ";
    cin>>size;
    
    temp_ptr = new double[size];
    
    cout<<temp_ptr<<endl;
    
    delete [] temp_ptr;
    // It will still point to the old allocated address but "delete" will free up the storage
    
    cout<<"temp_ptr after deletion "<<temp_ptr<<endl;
    
    return 0;
}
