/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 9, 2017, 3:51 PM
 * Purpose: Test Average Calculations
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PRCENT=100; //Percent Conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    float Bag=30,       //30 Cookies in a bag
            Svrgs=10,   //10 Servings for bag
            Clrs=300;   //300 Calories for bag
    float ClrCkie,      //Calorie Per One Cookie
          CksSrvgs,     //Cookies Per Serving
          TtlClrs,     //Total Calories From Cookies Eaten
          CkiesEtn;   //Cookies Eaten
    
    
    //Initialize variables
    cout<<"Number of Cookies Ate = ";
    cin>>CkiesEtn;
    
    //Input data
    CksSrvgs=Bag/Svrgs;
    ClrCkie=Clrs/CksSrvgs;
    TtlClrs=CkiesEtn*ClrCkie;
    
    //Output the transformed data
    cout<<"Total Amount of Calories From Cookie(s) = "<<TtlClrs<<endl;
    //Exit stage!
    return 0;
}

