/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on April 04, 2017, 11:54 AM
 * Purpose:
 */

//System Libraries 
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries 

//Global Constants Only

//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    int Fact=1;  //Product    
    
    //Process/Calculations
    for(int i=1;i<=6;i++){
        Fact*=i;
        cout<<i<<"  "<<Fact<<endl;
    }
    
    //Output Located

    //Exit Stage
    return 0;
}

