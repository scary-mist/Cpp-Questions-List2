//
//  main.cpp
//  Reference Example
//
//  Created by Amartya Vibhu on 29/03/22.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num{100};
    int &ref{num};
    
    cout<<num<<endl;
    cout<<ref<<endl;
    cout<<"\n----------------------------"<<endl;
    
    num = 200;
    cout<<num<<endl;
    cout<<ref<<endl;
    cout<<"\n----------------------------"<<endl;
    
    ref = 300;
    cout<<num<<endl;
    cout<<ref<<endl;
    cout<<"\n----------------------------"<<endl;
    
    vector<string> stooges{"Larry","Moe","Curly"};
    for(auto str: stooges)
        str = "Funny";       // str is copy of each element of the vector
    
    for(auto str: stooges)
        cout<<str<<endl;      // No Change
    cout<<"\n----------------------------"<<endl;
    for(auto &str: stooges)   // str is reference to each element of the vector
        str = "Funny";
    
    for(auto const &str: stooges)
        cout<<str<<endl;    // each vector element is changed
    
    cout<<endl;
    
    
    
    
    
    
    
    return 0;
    
}
