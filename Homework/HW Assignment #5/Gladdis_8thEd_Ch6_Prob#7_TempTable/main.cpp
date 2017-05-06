 /* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 05, 2017, 4:40 PM
 * Purpose: Temperature Table
 */

//System Libraries 
#include <iostream>
#include <cmath> //Math Library
#include <iomanip> //Format Library 
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions

//Function Prototypes
float Temp(float);

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    float F=0,  //Function Test
          Fahr=0; //Fahrenheit
          
    cout<<"Enter the Amount of Second The Object takes to fall."<<endl;      
    cin>>Fahr;
    
    //Draw from Function
    cout<<"Fahrenheit       Celsius"<<endl;
    cout<<"------------------------"<<endl;
    F=Temp(Fahr);
    
    //Exit Stage
    return 0;

}

float Temp(float t){
    float C; //Celsius
    for(float F=0;F<=t;F++){
    C=(5*(F-32))/9;  //Celsius Conversion from Fahrenheit
    cout<<setw(5)<<F<<setw(19)<<C<<endl;
    }
    return C;
}


