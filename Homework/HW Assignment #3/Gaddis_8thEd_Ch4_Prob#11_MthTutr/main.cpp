/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 9, 2017, 3:51 PM
 * Purpose: Math Tutor to determine if you can get right answer
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
     float NumOne,      //First Number
            NumTwo,     //Second Number
            Sum,        //Sum of Two Numbers   
            Answr;      //Enter calculated answer

    //Initialize variables
   
    //Input data
    cout<<"This Program Allows you to see if you get the right answer."<<endl;
    cout<<"Enter Two Numbers you would like to add together."<<endl;
    cout<<"First Number  =  ";
    cin>>NumOne;
    cout<<"Second Number = +";
    cin>>NumTwo;
    cout<<"Calculate the answer and input it here = ";
    cin>>Answr;
    
    //Map inputs to outputs or process the data
    Sum=NumOne+NumTwo;
    cout<<"Please Press Enter for Answer";
    cin.get();
    cin.ignore();
    
        if (Sum==Answr) 
        cout<<"Congratulations it was the correct answer!"<<endl;
        else cout<<"That was not the correct answer"<<endl;
    
    //Exit Stage Right!
    return 0;
}

