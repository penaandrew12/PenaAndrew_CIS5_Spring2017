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
    int YrsInpt;
    float total,
          average,
          InchInpt;
    
    //Number of Years
    cout<<"This Program will Calculate The Average Inch of Rain Per Month Each Year."<<endl;
    cout<<"Must Enter Year as Whole Number, If Year is not complete just fill with 0 until complete."<<endl;
    cout<<"Number of Years = ";
    cin>>YrsInpt;
    if(YrsInpt<=0)
    cout<<"Invalid Input"<<endl;
    
    else for(int Yrs=1;Yrs<=YrsInpt;Yrs++){
        for(int Mnth=1;Mnth<=12;Mnth++){
            cout<<"Enter Year "<<Yrs<<", Month "<<Mnth<<", Amount of Rain in Inches."<<endl;
            cin>>InchInpt;
            total+=InchInpt;
        }  
        average=total/(12);
        cout<<"The Average Inch of Rain for Year "<<Yrs;
        cout<<" is "<<average<<" Inches"<<endl<<endl<<endl;
    }
    
    //Output the transformed data
    
    //Exit stage!
    return 0;
}

