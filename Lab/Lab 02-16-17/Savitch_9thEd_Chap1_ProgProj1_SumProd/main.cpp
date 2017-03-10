/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on February 16, 2017, 10:05 AM
 * Purpose:  Calculate the sum and product of 2 random integers
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random number generator
#include <ctime>     //Time Library to seed the random number generator
using namespace std; //Name-space under which system libraries exist

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the random number generator with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    short op1,op2,
          sum,prod;
    
    //Initialize variables
    op1=rand()%188+10;//[10-180]
    op2=rand()%188+10;//[10-180]
    
    //Map inputs to outputs or process the data
    sum=op1+op2;
    prod=op1*op2;
    
    //Output the transformed data
    cout<<op1<<" + "<<op2<<" = "<<sum<<endl;
    cout<<op1<<" x "<<op2<<" = "<<prod<<endl;
    
    //Exit stage right!
    return 0;
}

