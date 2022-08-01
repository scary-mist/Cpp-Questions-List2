//
//  main.cpp
//  Pointers{Subscript and Offset Notation}
//
//  Created by Amartya Vibhu on 24/03/22.
//

#include <iostream>

using namespace std;

int main() {
    int scores[]{100, 98, 89};
    cout<<"Value of scores:  "<<scores<<endl;
    
    int *scores_ptr{scores};
    cout<<"Value of score_ptr: "<<scores_ptr<<endl;
    
    cout<<"\nArray subscript notation----------------------------------------"<<endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;
    
    cout<<"\nPointer subscript notation----------------------------------------"<<endl;
    cout<<scores_ptr[0]<<endl;
    cout<<scores_ptr[1]<<endl;
    cout<<scores_ptr[2]<<endl;
    
    cout<<"\nPointer offset notation----------------------------------------"<<endl;
    cout<<*scores_ptr<<endl;
    cout<<*(scores_ptr + 1)<<endl;
    cout<<*(scores_ptr + 2)<<endl;
    
    cout<<"\nArray offset notation----------------------------------------"<<endl;
    cout<<*scores<<endl;
    cout<<*(scores + 1)<<endl;
    cout<<*(scores + 2)<<endl;
    
    return 0;
    
    
    
    
   
}
