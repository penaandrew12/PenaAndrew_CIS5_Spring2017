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
        InchInpt;
    
    //Initialize variables
    cout<<"Years Calculated = ";
    cin>>YrsInpt;
    
    //Input data
    for(int Yrs=1;Yrs<=YrsInpt;Yrs++){
        cout<<Yrs<<endl;
            
        for(int Inch=1;Inch<=InchInpt;Inch++){
            cout<<"Inches a Month = ";
            cin>>InchInpt;
            Yrs+=Inch;
            cout<<Inch<<endl;
        }
    }
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage!
    return 0;
}

