/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 29, 2017, 9:10 PM
 * Purpose:
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int Days=1,
        DaysDsrd;
    
    //Initialize variables
    cout<<"Number of Days = ";
    cin>>DaysDsrd;
            
    //Input data
    if (DaysDsrd<0){
     
   cout<<"Invalid Input for Days."<<endl;
    }        
        else for(int Days=0;Days<2;Days++){
                cout<<"Day "<<Days<<" Earned $"<<((pow(2,Days))*.01)-.01<<endl;
                }
                for(int Days=2;Days<=DaysDsrd;Days++){
                    cout<<"Day "<<Days<<" Earned $"<<((pow(2,Days))/2)*.01<<endl;
                }

    //Output the transformed data
    
    //Exit stage!
    return 0;
}

