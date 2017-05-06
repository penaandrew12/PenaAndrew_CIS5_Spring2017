 /* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 05, 2017, 5:30 PM
 * Purpose: Present Value
 */

//System Libraries 
#include <iostream>
#include <cmath>    //Math Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions
const float PERCENT=100.0f; //Conversion to Percent

//Function Prototypes
float PrsntVal(float,float,float);

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    float fv=0, //Future Value
          ir=0, //Interest Rate
          yr=0, //Year
          pv=0; //Present Value
          
    cout<<"Enter Future Value in $/s"<<endl;      
    cin>>fv;
    cout<<"Enter Interest Rate"<<endl;      
    cin>>ir;
    cout<<"Enter the number of years"<<endl;      
    cin>>yr;
    
    cout<<fixed<<setprecision(2)<<endl;
    ir=ir/PERCENT;
    
    //Draw from Function
    pv=PrsntVal(fv,ir,yr);
    cout<<"The Present Value needed, in order to live off interest, is $"<<pv<<endl;
            
    //Exit Stage
    return 0;

}

float PrsntVal(float a,float b,float c){
    float d;
    d=a/(pow((1+b),c));
    return d;
}

