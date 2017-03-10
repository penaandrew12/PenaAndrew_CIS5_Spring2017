/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on February 21, 2017, 11:30 AM
 * Purpose: Budget Problem
 */

//System Libraries Here
#include <iostream>
using namespace std;

//Global Constants Only
const float Percent=100.0f; //Percentage
const float Billion=1.0e9f; //Conversion to Billions
const float Trllion=1.0e12f; //Conversion to Trillions

int main(int argc, char** argv) {
    //Declare and initialize Variables Here
    float FedBudg=3.54e12f;    //3.54 Trillion $'s 2016 Fed Budget
    float MltBudg=5.8e11f;     //580 Billion $'s 2016  Military Budget
    float NasaBudg=1.85e10f;   //18.5 Billion $'s 2016 NASA Budget
    float PerMil,PerNasa;      //Percent Budget
    
    //Map inputs to outputs or process the data
    PerMil=MltBudg/FedBudg*Percent;
    PerNasa=NasaBudg/FedBudg*Percent;
    
    //Output the transformed data
    cout<<"Federal Budget = $"<<FedBudg/Trllion<<" Trillions"<<endl;
    cout<<"Military Budget = $"<<MltBudg/Billion<<" Billions"<<endl;
    cout<<"NASA Budget = $"<<NasaBudg/Billion<<" Billions"<<endl;        
    cout<<"Military Budget percentage = $"<<PerMil<<"%"<<endl;
    cout<<"NASA Budget percentage = $"<<PerNasa<<"%"<<endl;
    
    //Exit stage right!
    return 0;
}

