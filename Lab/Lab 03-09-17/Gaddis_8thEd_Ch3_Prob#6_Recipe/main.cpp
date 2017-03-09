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
    unsigned short Sugr=15.0f,     //Sugar in Cups
                   Bttr=1.0f,      //Butter in Cups
                   Flour=2.75f;    //Flour in Cups
    int RS,        //Ratio for sugar a cookie 
            RB,     //Ratio for Butter a cookie
            RF;     //Ratio for Flour a cookie
    int TtlCkies=48.0f;          //Total Cookies
    char Ckies;     //Amount of Cookies
   
    //Input or initialize values
   RS=Sugr/TtlCkies;
   RB=Bttr/TtlCkies;
   RF=Flour/TtlCkies;
            
    //Process/Calculations 
    cout<<"Sugar Per Cookie = "<<RS<<" Cups"<<endl; 
    cout<<"Butter Per Cookie = "<<RB<<" Cups"<<endl;
    cout<<"Flour Per Cookie = "<<RF<<" Cups"<<endl;
   
    //Output Located 

    //Exit
    return 0;
}

