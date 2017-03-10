/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 9, 2017, 3:51 PM
 * Purpose: Test Average Calculations
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PRCENT=100; //Percent Conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    float WdgWght=12.5f, //Widget Weight
            NumWdg,    //Number of Widgets
            PltWght,    //Pallet Weight
            TtlWght;    //Total Weight
    
    //Initialize variables
    cout<<"Pallet Weight by itself = ";
    cin>>PltWght;
    cout<<"Total Weight of Pallet with Widgets on = ";
    cin>>TtlWght;
    
    //Input data
    NumWdg=(TtlWght-PltWght)/WdgWght;
    
    //Output the transformed data
    cout<<"Number of Widgets on this pallet is = "<<NumWdg<<" Widgets"<<endl;
    
    //Exit stage!
    return 0;
}

