/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 16, 2017, 11:30 AM
 * Purpose:
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants Only

//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    unsigned short PayChk,  //Pay Check
                   HrsWrkd, //Hours Worked
                   PayRte;  //Pay Rate
    
    //Input or initialize values
    cout<<"This Program allows you to determine your Pay Check."<<endl;
    cout<<"It will also determine if you earned Over-Time."<<endl;
    cout<<"Hours Worked = ";
    cin>>HrsWrkd;
    cout<<"Pay Rate Per Hour = $";
    cin>>PayRte;
    
    //Process/Calculations
        if (HrsWrkd<=40){
        cout<<"You Worked Less than Full-Time\n";
        PayChk=HrsWrkd*PayRte;
        }
            if(HrsWrkd>40){
            cout<<"You Get Paid for doing Over-Time\n";
            PayChk=HrsWrkd*PayRte+PayRte*(HrsWrkd-40);
            }
    
    //Output Located
    cout<<"You have a Pay Check of $"<<PayChk<<endl;
        
    //Exit Stage
    return 0;
}

