//
//  main.cpp
//  Pointer Arithmatic Examples
//
//  Created by Amartya Vibhu on 25/03/22.
//

#include <iostream>

using namespace std;

int main() {
    int scores[]{100,95,89,68,-1};
    int *score_ptr{scores};
    
    while(*score_ptr != -1){
        cout<<*score_ptr<<endl;
        score_ptr++;

    }
// Derefernce and increment in one line.
    cout<<"\n----------------------------------"<<endl;
    score_ptr = scores;
    while(*score_ptr != -1)
        cout<<*score_ptr++<<endl;
    
    
    cout<<"\n----------------------------------"<<endl;
    string s1{"Frank"};
    string s2{"Frank"};
    string s3{"James"};
    
    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};
    
    cout<<boolalpha;
    cout<<p1<<"=="<<p2<<":"<<(p1 == p2)<<endl;
    cout<<p1<<"=="<<p3<<":"<<(p1 == p3)<<endl;
    
    cout<<*p1<<"=="<<*p2<<":"<<(*p1 == *p2)<<endl;
    cout<<*p1<<"=="<<*p3<<":"<<(*p1 == *p3)<<endl;
    
    p3 = &s3; // points to James.
    cout<<*p1<<"=="<<*p3<<":"<<(*p1 == *p3)<<endl;
    
    cout<<"\n------------Difference of pointers----------------------"<<endl;
    
    char name[]{"Frank"};
    
    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};
    
    char_ptr1 = &name[0];
    char_ptr2 = &name[3];
    
    cout<<"In the string "<<name<<","<<*char_ptr2<<" is "<<(char_ptr2-char_ptr1)<<" Characters away from "<<*char_ptr1<<endl;
    
    cout<<endl;
    
    

    
    

    
    
    
    
    return 0;
}
