/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 29, 2017, 9:10 PM
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
    int YrsInpt,
        Yrs=0,
        Inch=0,
        InchInpt;
    
    //Initialize variables
    cout<<"Years Calculated = ";
    cin>>YrsInpt;
        
    //Input data
    for(int Yrs=1;Yrs<=YrsInpt;Yrs++){
        
        for(int Inch=1;Inch<=InchInpt;Inch++){
            float Yrs; 
            cout<<"Inches a Month = ";
            cin>>Inch;
            cout<<Inch<<endl;
            Yrs+=Inch;
        }
    }
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage!
    return 0;
}

