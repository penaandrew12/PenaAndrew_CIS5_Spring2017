/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 05, 2017, 2:30 PM
 * Purpose: Mark-Up
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions
float PERCENT=100; //Percent Conversion

//Function Prototypes
float NewCost(float, float);

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    float total, //Total
          Perc, //Percent Markup
          HSale, //Whole Sale Price
          MarkUp; //Markup on Item
    
    //Input or initialize values
    cout<<"Whole Sale on Item = $";
    cin>>HSale;
    cout<<"Mark Up Percent = ";
    cin>>Perc;
    
    //Process/Calculations
    MarkUp=HSale*(Perc/PERCENT);
    
    //Pull from Function
    total=NewCost(HSale,MarkUp);
    
    //Output Located
    cout<<"Markup is = $"<<MarkUp<<endl;
    cout<<"New Price is = $"<<total<<endl;
    
    //Exit Stage
    return 0;

}

float NewCost(float a, float b){
    float c;
    c=b+a;
    return c;
}
