 /* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 05, 2017, 6:30 PM
 * Purpose: Population Growth and Death Calculation
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
float Poplutn(int,float,float,int);

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
    if (Start<2){
        cout<<"Error! Starting Size must not be less than two."<<endl;
        return 0;
    }
    
    cout<<"Enter Birth Rate Percent"<<endl;      
    cin>>Brth;
    if (Brth<0){
        cout<<"Error! Birth Rate must not be less than 0."<<endl;
        return 0;
    }
    
    cout<<"Enter Death Rate Percent"<<endl;      
    cin>>Death;
    if (Death<0){
        cout<<"Error! Death Rate must not be less than 0."<<endl;
        return 0;
    }
    
    cout<<"Enter the number of Years"<<endl;      
    cin>>Yrs;
    if (Yrs<1){
        cout<<"Error! Year must not be less than 1."<<endl;
        return 0;
    }
    
    Brth=Brth/PERCENT;
    Death=Death/PERCENT;
    
    cout<<"Year           Population"<<endl;
    cout<<"-------------------------"<<endl;
    //Draw from Function
    Poplutn(Start,Brth,Death,Yrs);
    
    //Exit Stage
    return 0;

}

float Poplutn(int a,float b,float c,int d){
    for (int count=1;count<=d;count++){
    a=a+(a*b)-(a*c);
    cout<<setw(2)<<count<<setw(20)<<a<<endl;
    }
    return a;
}
