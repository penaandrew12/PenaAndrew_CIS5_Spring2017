/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on February 21, 2017, 12:06 PM
 * Purpose: Debt Per Person and Percentage Increase
 */

//System Libraries Here
#include <iostream>
using namespace std;

//Global Constants Only
const float Percent=100.0f;     //Percentage
const float Million=1.0e6f;     //Conversion to Millions
const float Trllion=1.0e12f;    //Conversion to Trillions

int main(int argc, char** argv) {
    //Declare and initialize Variables Here
    float Populn2008=3.04e9f;   //2008 Population
    float Populn2016=3.22e9f;   //2016 Population
    float FDebt2008=9.7e12f;    //9.7 Trillion 2008 Debt
    float FDebt2016=2.0e13f;    //20 Trillion 2016 Debt
    float Per2008,Per2016;      //Personal Debt
    float PerChge,MulChge;      //Percentage and Multiplicative change
    float ppChge;               //Per Person Change in Debt
    
    //Map inputs to outputs or process the data
    Per2008=FDebt2008/Populn2008;                       //$'s/Person
    Per2016=FDebt2016/Populn2016;                       //$'s/Person
    PerChge=(FDebt2016-FDebt2008)/FDebt2008*Percent;    //% Change in Debt
    MulChge=FDebt2016/FDebt2008;                        //x Change of Debt
    ppChge=(Per2016-Per2008)/Per2008*Percent;           //% Change in Per/Person Debt
    
    //Output the transformed data
    cout<<"Federal Debt 2008 = $"<<FDebt2008/Trllion<<" Trillion"<<endl;
    cout<<"Federal Debt 2016 = $"<<FDebt2016/Trllion<<" Trillion"<<endl;
    cout<<"US Population 2008 = $"<<Populn2008/Million<<" Million"<<endl;
    cout<<"US Population 2016 = $"<<Populn2016/Million<<" Million"<<endl;
    cout<<"Percentage Change in Debt = "<<PerChge<<"%"<<endl;
    cout<<"Multiplicative Change in Debt = "<<MulChge<<"x"<<endl;
    cout<<"Per Person Debt in 2008 = $"<<Per2008<<" Million"<<endl;
    cout<<"Per Person Debt in 2016 = $"<<Per2016<<" Million"<<endl;
    cout<<"Per Person %Change in Debt = "<<ppChge<<"%"<<endl;
    
    //Exit stage right!
    return 0;
}

