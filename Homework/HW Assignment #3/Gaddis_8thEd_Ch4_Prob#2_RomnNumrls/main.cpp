/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 9, 2017, 3:51 PM
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
    unsigned short Num;
    char RmnNum;
    
    //Initialize variables
    cout<<"This program will convert a number to Roman Numeral's"<<endl;
    cout<<"Enter a number from 1-10."<<endl;
    cin>>Num;
    
    //Map inputs to outputs or process the data
     switch(Num){
        case 10:RmnNum='X';break;
        case 9:RmnNum='IX';break;    
        case 8:RmnNum='VIII';break;
        case 7:RmnNum='VII';break;
        case 6:RmnNum='VI';break;
        case 5:RmnNum='V';break;    
        case 4:RmnNum='IV';break;
        case 3:RmnNum='III';break;
        case 2:RmnNum='II';break;
        case 1:RmnNum='I';break;
    }    
    
    //Output the transformed data
    cout<<"The Number you have entered was "<<Num<<". The Roman Numeral is "<<RmnNum<<endl;
     
    //Exit stage!
    return 0;
}

