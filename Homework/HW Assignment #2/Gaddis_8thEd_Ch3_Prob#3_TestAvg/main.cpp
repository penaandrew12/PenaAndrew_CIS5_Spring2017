/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 9, 2017, 6:30 PM
 * Purpose: Test Average Calculations
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip> //Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float TSOne,        //Test Score 1
            TSTwo,      //Test Score 2
            TSThree,    //Test Score 3
            TSFour,     //Test Score 4
            TSFive;     //Test Score 5
    float TstAvg;       //Test Average for all 5 Tests
    
    
    //Initialize variables
    cout<<"Test Score Number 1 = ";
    cin>>TSOne;
    cout<<"Test Score Number 2 = ";
    cin>>TSTwo;
    cout<<"Test Score Number 3 = ";
    cin>>TSThree;
    cout<<"Test Score Number 4 = ";
    cin>>TSFour;
    cout<<"Test Score Number 5 = ";
    cin>>TSFive;
    
    //Input data
    TstAvg=(TSOne + TSTwo + TSThree + TSFour + TSFive)/5;
    
    //Output the transformed data
    cout<<fixed<<setprecision(1);
    cout<<"Test Average = "<<TstAvg<<endl;
    
    //Exit stage!
    return 0;
}

