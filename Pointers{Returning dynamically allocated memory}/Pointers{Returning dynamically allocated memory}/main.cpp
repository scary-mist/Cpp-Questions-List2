//
//  main.cpp
//  Pointers{Returning dynamically allocated memory}
//
//  Created by Amartya Vibhu on 28/03/22.
//

#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0){
    int *new_storage{nullptr};
    new_storage = new int[size];
    for(size_t i{0}; i<size; ++i)
        *(new_storage + i) = init_value;
    return new_storage;
}

void display(int *const array, size_t size){
    for(size_t i{0}; i < size; ++i)
        cout<<array[i]<<" ";
    cout<<endl;
}

int main() {
    int *my_array{nullptr};
    size_t size;
    int init_value;
    
    cout<<"How many integers you want to allocate? "<<endl;
    cin>>size;
    cout<<"What value you want to initialise them? "<<endl;
    cin>> init_value;
    
    my_array = create_array(size, init_value);
    
    cout<<"\n--------------------------"<<endl;
    
    display(my_array,size);
    
    
    
    delete[] my_array;
    return 0;
    
    
}
