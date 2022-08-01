//
//  main.cpp
//  Pointers{Passing pointers to  function}
//
//  Created by Amartya Vibhu on 25/03/22.
//

#include <iostream>
#include <vector>
#include <string>


using namespace std;

/*  Example 1
 
 void double_data(int *int_ptr){
    *int_ptr *= 2;
}

int main() {
    int *int_ptr{nullptr};
    int value{10};
    
    cout<<"Value: "<<value<<endl;
    
    double_data(&value);
    cout<<"Value after 1st call of double_data: "<<value<<endl;
    
    cout<<"\n--------------------------"<<endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout<<"Value after 2nd call: "<<value<<endl;

    return 0;
    
}
 */

// Swapping two numbers , displaying vector string and

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(vector<string> *v){
    for(auto str: *v)
        cout<<str<<" ";
    
    cout<<endl;
    
}

void display1(int *array, int sentinal){
    while (*array != sentinal)
        cout<<*array++<<" ";
    cout<<endl;
}
int main(){
    int x{100},y{95};
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    
    swap(&x,&y);
    
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    
    cout<<"/n-----------------------------------------------"<<endl;
    vector<string>stooges{"Larry","Moe","Curly"};
    display(&stooges);
    
    cout<<"/n-----------------------------------------------"<<endl;
    int scores[] {100,98,95,85,-1};
    display1(scores, -1);
    
    
    return 0;
}
