/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 05, 2017, 12:00 PM
 * Purpose: Linear Search
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    int input[12];
    
    //Input Data
    cout<<"Input Variables now: "<<endl;
    for(int i=0;i<12;i++){
    cin>>input[i];
    }
    cout<<endl;
    
    //Variable to be Searched for
    cout<<"Enter Number Desired to be Searched for in Program = ";
    int n;
    cin>>n;
    cout<<endl;
    
    //Search for variable n
    for (int i=0;i<12;i++){
        int v;
        v=input[i];
        if(v==n){
        cout<<"Valid"<<endl;
        } 
        else 
            cout<<"Invalid"<<endl;
    }
    
    //Exit Stage
    return 0;
}

