/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 30, 2017, 11:30 AM
 * Purpose: 
 */

//System Libraries 
#include <iostream>     //Library
#include <cstdlib>      //Random number Genertator
#include <ctime>        //Set the random number seed
using namespace std;

//User Libraries 

//Global Constants Only

//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned short>(time(0)));
    
    //Declare all Variables
    int op1,op2,result,answer;
    char choice;
    
    //Input or initialize values
    cout<<"This Program, Math Tutor, will help you with Math."<<endl;
    cout<<"Choose An Operation * / + - "<<endl;
    cin>>choice;
    
    //Process/Calculations
    switch(choice){
        case '+':{
            op1=rand()%900+100; //[100-999]
            op2=rand()%900+100; //[100-999]
            answer=op1+op2;     //[3-4 Digit Result]
        }
        case '-':{
            op1=rand()%900+100; //[100-999]
            op2=rand()%900+100; //[100-999]
            answer=op1-op2;     //[0-3 Digit Result]
        }
        case '*':{
            op1=rand()%90+10; //[10-99]
            op2=rand()%90+10; //[10-99]
            answer=op1*op2;   //[2-4 Digit Result]
        }
        case '/':{
            answer=rand()%900+100; //[100-999]
            op2=rand()%90+10;      //[10-99]
            op1=answer*op2;        //[2-3 Digit Result]
        }
        default:{
            cout<<"Bad Operator"<<endl;
            return 1;
        }
    }
            
    //Output Located

    //Exit Stage
    return 0;
}

