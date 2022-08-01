//
//  main.cpp
//  Switch statement
//
//  Created by Amartya Vibhu on 06/03/22.
//

#include <iostream>

using namespace std;

int main()
{
    char letter_grade{};
    cout<<"Enter the letter grade you expect in exam."<<endl;
    cin>>letter_grade;
    switch(letter_grade){
        case 'a':
        case 'A':
        cout<<"You need to score more than 90 marks"<<endl;
        break;
        case 'b':
        case 'B':
        cout<<"You need to score more than 80 marks"<<endl;
        break;
        case 'f':
        case 'F':{
            char confirm{};
            cout<<"Are you confirm(Y/N)"<<endl;
            cin>>confirm;
            if(confirm == 'y' || confirm == 'Y')
            cout<<"You don't want to study."<<endl;
            else if(confirm == 'n' || confirm == 'N')
            cout<<"Good go study."<<endl;
            else
            cout<<"Invalid choice."<<endl;
            break;
        }
        default:
        cout<<"That's not a valid grade. "<<endl;
        
    }
    return 0;
}
