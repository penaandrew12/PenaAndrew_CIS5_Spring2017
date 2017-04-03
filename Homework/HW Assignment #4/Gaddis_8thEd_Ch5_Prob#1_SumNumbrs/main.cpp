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
    int DNum,
        sum;

    //Input data
    cout<<"This Program will get the sum of adding the integers you have entered starting from 1."<<endl;
    cout<<"Enter a Real Number other than a Negative, 0, and 1."<<endl;
    cout<<"If a Negative, 0, or 1 is Entered it will Not Compute."<<endl;
    cin>>sum;
    cout<<"If you were to add all integers from 1 to "<<sum<<endl;
    
    //Output the transformed data
    DNum=sum*(sum+1)/2;
    
    cout<<"You would get = "<<DNum<<endl;
    
    //Exit stage!
    return 0;
}

