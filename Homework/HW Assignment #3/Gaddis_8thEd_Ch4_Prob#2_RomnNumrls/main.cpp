/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 19, 2017, 2:45 PM
 * Purpose: Convert Numbers to Roman Numerals using switch statement
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
    unsigned short Num;     //Number 1-10
    char RmnNum;            //Roman Numeral 1-10
    
    //Initialize variables
    cout<<"This program will convert a number to Roman Numeral's"<<endl;
    cout<<"Enter a number from 1-10."<<endl;
    cin>>Num;
    
    //Map inputs to outputs or process the data
    switch(Num){
        case 10:cout<<"Roman Numeral = X";break;
        case  9:cout<<"Roman Numeral = IX";break;    
        case  8:cout<<"Roman Numeral = VIII";break;
        case  7:cout<<"Roman Numeral = VII";break;
        case  6:cout<<"Roman Numeral = VI";break;
        case  5:cout<<"Roman Numeral = V";break;    
        case  4:cout<<"Roman Numeral = IV";break;
        case  3:cout<<"Roman Numeral = III";break;
        case  2:cout<<"Roman Numeral = II";break;
        case  1:cout<<"Roman Numeral = I";break; 
        default:cout<<"Did not enter a number between 1-10";break;
    } 
  
    //Exit stage!
    return 0;
}

