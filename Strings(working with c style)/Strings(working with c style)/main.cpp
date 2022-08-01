//
//  main.cpp
//  Strings(working with c style)
//
//  Created by Amartya Vibhu on 10/03/22.
//

#include <iostream>
#include<cstring>
#include<cctype>

using namespace std;
int main() {
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50];
    cout<<"Enter your first name: ";
    cin>>first_name;
    cout<<"Enter your last name: ";
    cin>>last_name;
    cout<<"-------------------------"<<endl;
    cout<<"Hello "<<first_name<<", Your first name has "<<strlen(first_name)<<" Characters";
    cout<<" and your last name "<<last_name<<" has "<<strlen(last_name)<<" characters"<<endl;
    strcpy(full_name,first_name); //copy first name to full name.
    strcat(full_name," ");        // concatenate full_name and a space
    strcat(full_name,last_name);  // oncatenate full_name and last_name
    cout<<"Your full name is: "<<full_name<<endl;
    cout<<"----------------------------------------------------"<<endl;
    strcpy(temp,full_name);
    if(strcmp(temp,full_name) == 0)
        cout<<temp<<" and "<<full_name<<" are the same."<<endl;
    else
        cout<<temp<<" and "<<full_name<<" are not same."<<endl;
    
    return 0;
    
    
}

