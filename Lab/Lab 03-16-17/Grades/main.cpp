/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 16, 2017, 11:25 AM
 * Purpose: Four ways to Earn a Grade through Branching 
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
    unsigned short scre;    //Integer scores valid from 0 to 100
    char grde; //Grade Letter
    
    //Input or initialize values
    cout<<"This program produces a grade from a score input."<<endl;
    cout<<"The data type used is an integer [0-100]."<<endl;
    cout<<"Type in the score"<<endl;
    cin>>scre;
    if(!(scre>=0&&scre<=100)){
        cout<<"You failed to type an integer between 0 and 100"<<endl;
        return 1; }  //Use of DeMorgans law to make clear
    
    //Process/Calculations
    if(scre>=90&&scre<=100)grde='A';
    if(scre>=80&&scre<90)  grde='B';
    if(scre>=70&&scre<80)  grde='C';
    if(scre>=60&&scre<70)  grde='D';
    if(scre<60)            grde='F';
    
    //Output Located
    cout<<"For a Score = "<<scre<<" your grade is an "<<grde<<endl;
    
    //Exit Stage
    return 0;
}

