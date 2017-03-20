/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 19, 2017, 2:55 PM
 * Purpose: Determine Body Mass Index
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>    //Library
#include <iomanip>  //Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    float Wght,      //Weight in pounds
          Hght;      //Height in inches
    float BMI;       //Body Mass Index
    
    //Input data
    cout<<"This program inputs your height and weight and calculates your Body Mass Index."<<endl;
    cout<<"Enter your Height in Inches = ";
    cin>>Hght;
    cout<<"Enter your Weight in Pounds = ";
    cin>>Wght;
    cout<<fixed<<setprecision(2)<<endl;         //Manipulator
    BMI=Wght*(703/pow(Hght,2));
    
    //Output the transformed data
    if(BMI<18.5){                       //BMI under 18.5 underweight
    cout<<"You are considered underweight. ";
    cout<<"You have a BMI of "<<BMI<<endl;
    }  
    else if(BMI>25){                        //BMI over 25 overweight
             cout<<"You are considered overweight. ";
             cout<<"You have a BMI of "<<BMI<<endl;
            }
                else if(BMI<25&&BMI>18.5){          //BMI Optimal
                     cout<<"You have optimal weight. ";
                     cout<<"You have a BMI of "<<BMI<<endl;
                }
    
    //Exit stage!
    return 0;
}

