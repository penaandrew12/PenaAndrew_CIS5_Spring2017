/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 09, 2017, 11:30 AM
 * Purpose: Recipe
 */

//System Libraries
#include <iostream>
#include <iomanip> //Library
using namespace std;

//User Libraries

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes 

//Program Execution Begins 
int main(int argc, char** argv) {
    //Declare all Variables
    float Sugr=1.5f,     //Sugar in Cups
          Bttr=1.0f,      //Butter in Cups
          Flour=2.75f;    //Flour in Cups
    float RS,        //Ratio for sugar a cookie 
          RB,     //Ratio for Butter a cookie
          RF;     //Ratio for Flour a cookie
    float TtlSug,    //Total Sugar needed
          TtlBttr,    //Total Butter needed 
          TtlFlour;   //Total Flour needed
    float TtlCkies=48;          //Total Cookies
    float Ckies;     //Amount of Cookies
   
    //Input or initialize values
   RS=Sugr/TtlCkies;
   RB=Bttr/TtlCkies;
   RF=Flour/TtlCkies;
            
    //Process/Calculations 
   cout<<"Amount of Cookies desired = ";
   cin>>Ckies;
    
    TtlSug=Ckies*RS;
    TtlBttr=Ckies*RB;
    TtlFlour=Ckies*RF;
    
    cout<<"Total Sugar Required  = "<<TtlSug<<" Cups"<<endl;
    cout<<"Total Butter Required = "<<TtlBttr<<" Cups"<<endl;
    cout<<"Total Flour Required  = "<<TtlFlour<<" Cups"<<endl;
   
    //Output Located 

    //Exit
    return 0;
}

