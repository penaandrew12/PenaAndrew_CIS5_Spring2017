/* 
 * File:   main.cpp
 * Author: Andrew Pena
 *Created on February 26, 2017, 2:28 PM
 * Purpose: Calculate Sales Tax
 */

#include <iostream>
using namespace std;

//Global Constants
const float Percent=100.0f;     //Conversion to Percentage

int main(int argc, char** argv) {
    
    //Declare Variables
    float TtlPrch=95.0f;          //Total Purchase
    float SteSlsTax=.04f;         //State Sales Tax of 4%
    float CntyTax=.02f;           //County Sales Tax of 2%
    float TtlSlsTax,              //Total Sales Tax
          TtlCntyTax,             //Total County Tax
          TtlSteSlsTax;           //Total State Sales Tax
    
    //Inputs-Outputs & Variables
    TtlSlsTax=(CntyTax*TtlPrch)+(SteSlsTax*TtlPrch);
    TtlCntyTax=CntyTax*TtlPrch;
    TtlSteSlsTax=SteSlsTax*TtlPrch;
            
    //Output Data 
    cout<<"State Sales Tax  = $"<<TtlSteSlsTax<<endl;
    cout<<"County Sales Tax = $"<<TtlCntyTax<<endl;
    cout<<"Total Sales Tax  = $"<<TtlSlsTax<<endl;
            
    //Exit
    return 0;
}

