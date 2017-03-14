/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 14, 2017, 11:30 AM
 * Purpose: Time Calculation
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants Only
const int MINUTE=60;       //How many second in a minute
const int HOUR=60*MINUTE;  //How many seconds in a hour
const int DAY=24*HOUR;     //How many seconds in a day
const int WEEK=7*DAY;      //How many seconds in a week
const int YEAR=52*WEEK;    //How many seconds in a year

//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    
    //Declare all Variables
    int nSecs; //Number of seconds to convert
    int nYrs,nMnths,nWks,nDys,nHrs,nMin;
    
    //Input or initialize values
    cout<<"This Program converts seconds to Years/Months/Weeks/Days/Hours"<<endl;
    cout<<"Input the number of seconds for the conversion/equivalence"<<endl;
    cin>>nSecs;
    
    //Process/Calculations
    nYrs=nSecs/YEAR;
    cout<<nYrs<<" Years ";
    nSecs-=nYrs*YEAR;
    nWks=nSecs/WEEK;
    cout<<nWks<<" Weeks ";
    nMnths=nWks*3/13;
    cout<<nMnths<<" Months ";
    nSecs-=nWks*WEEK;
    nDys=nSecs/DAY;
    cout<<nDys<<" Days ";
    nSecs-=nDys*DAY;
    nHrs=nSecs/HOUR;
    cout<<nHrs<<" Hours ";
    nSecs-=nHrs*HOUR;
    nMin=nSecs/MINUTE;
    cout<<nMin<<" Minutes ";
    nSecs-=nMin*MINUTE;
    cout<<nSecs<<" Seconds";
    
    
    //Exit Stage
    return 0;
}

