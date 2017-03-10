/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on February 28, 2017, 9:00 PM
 * Purpose: Circuit Board Price
 */

#include <iostream>
using namespace std;

//Global Constant
const float Percent=100;        //Conversion to Percent

int main(int argc, char** argv) {
    
    //Declare Variables
    float PP=.35f;               //Percent Profit on Circuit Board Sold
    float Cst=14.95f;            //Cost of Circuit    
    float SP,MrkUp;              //Selling Price, Mark Up on Price
    
    //Inputs-Outputs & Variables
    MrkUp=Cst*(PP);
    SP=Cst+MrkUp;
    
    //Output Data 
    cout<<"$"<<Cst<<"Cents x "<<PP<<"%"<<" = $"<<MrkUp<<"Cents"<<endl;
    cout<<"$"<<Cst<<"Cents + $"<<MrkUp<<"Cents = $"<<SP<<"Cents"<<endl;
            
    //Exit
    return 0;
}

 