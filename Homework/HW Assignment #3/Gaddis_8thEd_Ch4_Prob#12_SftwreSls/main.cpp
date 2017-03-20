/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 19, 2017, 3:51 PM
 * Purpose:
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100;    //Conversion to Percent

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int Pkge,
        Ttl,
        Dscnt;
    float PrcePkge=99;
    
    //Initialize variables
    cout<<"You receive a discount the more packages you buy"<<endl;
    cout<<"Enter the amount of packages you wish to purchase = ";
    cin>>Pkge;
    
    //Input data
    if (Pkge>=10&&Pkge<=19) Dscnt=20/PERCENT;
    if (Pkge>=20&&Pkge<=49) Dscnt=30/PERCENT;
    if (Pkge>=50&&Pkge<=99) Dscnt=40/PERCENT;
    if (Pkge>=100)          Dscnt=50/PERCENT;
    
    Ttl=PrcePkge*Dscnt;
            
    //Output the transformed data
    cout<<"The Price of each package is $"<<PrcePkge<<"."<<endl;
    cout<<"With the current amount of packages you want to buy, you receive a Discount of "<<Dscnt<<"%."<<endl;
    cout<<"Your Total for "<<Pkge<<" Packages is $"<<Ttl<<endl;
    
    //Exit stage!
    return 0;
}

