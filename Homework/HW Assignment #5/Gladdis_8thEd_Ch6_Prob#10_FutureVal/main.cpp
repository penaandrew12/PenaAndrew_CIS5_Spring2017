 /* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 03, 2017, 11:30 AM
 * Purpose: Mark-Up
 */

//System Libraries 
#include <iostream>
#include <cmath> //Math Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions
const float PERCENT=100.0f; //Conversion to Percent

//Function Prototypes
float FutureVal(float,float,float);

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    float fv=0, //Future Value
          ir=0, //Interest Rate
          mnths=0, //Year
          pv=0; //Present Value
          
    cout<<"Enter Present Value in $/s"<<endl;      
    cin>>pv;
    cout<<"Enter Interest Rate"<<endl;      
    cin>>ir;
    cout<<"Enter the number of months"<<endl;      
    cin>>mnths;
    
    cout<<fixed<<setprecision(2)<<endl;
    ir=ir/PERCENT;
    
    //Draw from Function
    fv=FutureVal(pv,ir,mnths);
    cout<<"The Present Value needed, in order to live off interest, is $"<<fv<<endl;
            
    //Exit Stage
    return 0;

}

float FutureVal(float a,float b,float c){
    float d;
    d=a*(pow((1+b),c));
    return d;
}


