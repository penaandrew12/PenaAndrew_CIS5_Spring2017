/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 19, 2017, 3:51 PM
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
    int NumOne,     //First Number
        NumTwo;     //Second Number
    
    //Input data
    cout<<"Enter two numbers and determine which one is max and min."<<endl;
    cout<<"Enter First Number Here = ";
    cin>>NumOne; 
    cout<<"Enter Second Number Here = ";
    cin>>NumTwo;
    
        if (NumOne==NumTwo)
        {cout<<"The First Number ("<<NumOne<<") is Equal The Second Number ("<<NumTwo<<")"<<endl;
        }
            else if (NumOne>NumTwo)
            {cout<<"The First Number ("<<NumOne<<") is Greater than The Second Number ("<<NumTwo<<")"<<endl;
            }
                else if (NumOne<NumTwo)
                {cout<<"The First Number ("<<NumOne<<") is Less than The Second Number ("<<NumTwo<<")"<<endl; 
                }

    //Exit stage!
    return 0;
}

