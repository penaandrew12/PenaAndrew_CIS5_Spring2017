/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 9, 2017, 3:51 PM
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
    float MnthOne,        //Month 1
            MnthTwo,      //Month 2
            MnthThree,    //Month 3
            RainAvg;      //Average Rain for the Three Months
    
    
    //Initialize variables
    cout<<"Rained Amount in Inches"<<endl;
    cout<<"Month of September Rain Fall is = ";
    cin>>MnthOne;
    cout<<"Month of October Rain Fall is = ";
    cin>>MnthTwo;
    cout<<"Month of November Rain Fall is = ";
    cin>>MnthThree;
    
    //Input data
    RainAvg=(MnthOne+MnthTwo+MnthThree)/3;

    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<fixed<<setprecision(2);
    cout<<"Average Rain for the Months of September,October,November is "<<RainAvg<<" inches"<<endl;
    
    //Exit stage!
    return 0;
}

