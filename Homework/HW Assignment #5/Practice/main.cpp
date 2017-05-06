 /* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 03, 2017, 11:30 AM
 * Purpose: Mark-Up
 */

//System Libraries 
#include <iostream>
#include <cmath>    //Math Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions
const float PERCENT=100.0f; //Conversion to Percent

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    int Start=0, //starting Population
        Yrs=0, //Number of years
        N=0; //New Population Size
    float Brth=0, //Birth Rate
          Death=0; //Death Rate
    
          
    cout<<"Enter Starting size of Population"<<endl;      
    cin>>Start;
    cout<<"Enter Birth Rate"<<endl;      
    cin>>Brth;
    cout<<"Enter Death Rate"<<endl;      
    cin>>Death;
    cout<<"Enter the number of Years"<<endl;      
    cin>>Yrs;
    
    Brth=Brth/PERCENT;
    Death=Death/PERCENT;
    
    cout<<"Year           Population"<<endl;
    cout<<"-------------------------"<<endl;
    //Draw from Function
    
    for (int count=1;count<=Yrs;count++){
    Start=Start+(Start*Brth)-(Start*Death);
    cout<<setw(2)<<count<<setw(20)<<Start<<endl;
    }
    
    //Exit Stage
    return 0;

}
