/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 29, 2017, 9:10 PM
 * Purpose:
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int Spd=0,
        Hrs=0;
    
    //Initialize variables
    cout<<"Speed of Car in MPG"<<endl;
    cin>>Spd;
    cout<<"Hours Traveled"<<endl;
    cin>>Hrs;
    cout<<"Hour     "<<"Distance Traveled"<<endl;
    cout<<"------------------------------"<<endl;
    
    //Input data
    for(int Dstnce=Spd;Dstnce<=Hrs;Dstnce++){
        Dstnce=Spd*Hrs;
        cout<<Spd<<Hrs<<endl;
    }
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage!
    return 0;
}

