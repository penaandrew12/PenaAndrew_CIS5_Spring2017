/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 29, 2017, 9:10 PM
 * Purpose: Sum of Numbers
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
    int num=0;
    
    //Initialize variables
    
    //Input data
    cout<<"This Progarm will get the sum of the number you have entered starting from 1."<<endl;
    cout<<"Enter a Real Number other than a Negative and 1."<<endl;
    cout<<"If a Negative or 1 is Entered it will Not Compute."<<endl;
    cin>>num;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for(num=0;num<=10;num++)
        cout<<"If you were to add the sum from "<<num<<". It would be = "<<endl;
    
    //Exit stage!
    return 0;
}

