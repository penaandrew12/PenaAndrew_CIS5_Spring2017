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
const float CNVPTOD=100.0f;

//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    int salary, sumSlry;
    
    //Input or initialize values
    sumSlry=salary=1;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Day       $Salary     $Sum"<<endl;
    cout<<setw(3)<<1<<setw(12)<<salary/CNVPTOD<<setw(12)<<sumSlry/CNVPTOD<<endl;
    
    //Process/Calculations
    for(int day=2;day<=31;day++){
        salary*=2;
        sumSlry+=salary;
        cout<<setw(3)<<day<<setw(12)<<salary/CNVPTOD<<setw(12)<<sumSlry/CNVPTOD<<endl;
    }
    
    //Output Located

    //Exit Stage
    return 0;
}

