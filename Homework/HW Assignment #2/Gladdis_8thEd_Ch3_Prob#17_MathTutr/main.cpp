/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 9, 2017, 4:00 PM
 * Purpose: Math Tutor
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
    float NumOne,       //First Number
            NumTwo,     //Second Number
            Sum,        //Sum of Two Numbers
            Hit;        //Hit for Answer
    char ch;
    
    //Initialize variables
   
    //Input data
    cout<<"First Number  =  ";
    cin>>NumOne;
    cout<<"Second Number = +";
    cin>>NumTwo;
    cout<<"Please Press Enter for Answer";
    cin.get();
    cin.ignore();
    
    //Map inputs to outputs or process the data
    Sum=NumOne+NumTwo;
    
    //Output the transformed data
    
    cout<<"\nAnswer        =  "<<Sum<<endl;
    
    //Exit stage!
    return 0;
}

