/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 03, 2017, 11:30 AM
 * Purpose: Recipe
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes 

//Program Execution Begins 
int main(int argc, char** argv) {
    //Declare all Variables
    float Sugr=15.0f,     //Sugar in Cups
          Bttr=1.0f,      //Butter in Cups
          Flour=2.75f;    //Flour in Cups
    float RS,        //Ratio for sugar a cookie 
          RB,     //Ratio for Butter a cookie
          RF;     //Ratio for Flour a cookie
    float TtlSug,    //Total Sugar needed
          TtlBttr,    //Total Butter needed 
          TtlFlour;   //Total Flour needed
    float TtlCkies=48.0f;          //Total Cookies
    char Ckies;     //Amount of Cookies
   
    //Input or initialize values
   RS=Sugr/TtlCkies;
   RB=Bttr/TtlCkies;
   RF=Flour/TtlCkies;
            
    //Process/Calculations 
    cout<<"Out of 48 Cookies"<<endl;
    cout<<"Sugar Per Cookie  = "<<RS<<" Cups"<<endl; 
    cout<<"Butter Per Cookie = "<<RB<<" Cups"<<endl;
    cout<<"Flour Per Cookie  = "<<RF<<" Cups"<<endl;
    cout<<"Amount of Cookies desired = ";
    cin>>Ckies;
    
    TtlSug=Ckies*RS;
    TtlBttr=Ckies*RB;
    TtlFlour=Ckies*RF;
    cout<<"Total Sugar Required  ="<<TtlSug<<" Cups"<<endl;
    cout<<"Total Butter Required ="<<TtlBttr<<" Cups"<<endl;
    cout<<"Total Flour Required  ="<<TtlFlour<<" Cups"<<endl;
    
    //Output Located 

    //Exit
    return 0;
}

