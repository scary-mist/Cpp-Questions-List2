//
//  main.cpp
//  Range based for loop
//
//  Created by Amartya Vibhu on 07/03/22.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<double> temps{87.2, 23.5, 24.6, 56.3};
    double avg_temp{};
    double run_sum{};
    for(auto temp : temps){
    run_sum +=temp;
        cout<<run_sum<<" ";
        
    }
    avg_temp= run_sum/temps.size();
    cout<<avg_temp;
    // Or we can also do by this method.
  /*  int size{0};
        double avg_temp{};
        double run_sum{};
        for(auto temp : {87.2, 23.5, 24.6, 56.3}){
        run_sum +=temp;
        ++size;
            
        }
        avg_temp= run_sum/size;
        cout<<avg_temp;      */
    //for getting rid from spaces from a string
    /*for(auto c : "This is my test")
     if(c!=' ')
     cout<<c;
     */
    //Quest.2: Use a range based for loop to loop through the given vector and determine how many of elements are divisible by 3 or 5.//
    /*
    
     vector<int> vec{1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
         int div_elements{};
         for(auto element : vec)
         if(element % 5 == 0 || element % 3 == 0){
             ++div_elements;
         }
         cout<<"No. of elements divisible by 5 or 8 are: "<<div_elements<<endl; */
     
    return 0;
}
