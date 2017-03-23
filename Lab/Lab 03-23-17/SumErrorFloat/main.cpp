/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 23, 2017, 11:30 AM
 * Purpose: Brute Force
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
    //Declare all Initialize Variables
    //Make sure 0<=n<=40000
    int nLoop=10000000;
    float sum=0.0f,frac=0.1f;
    
    //Input values
    for(int i=1;i<=nLoop;i++){
        sum+=frac;
    }
    
    //Output Located
    cout<<"The computed sum of "
            <<frac<<"->"<<nLoop<<" times = "<<sum<<endl;
    cout<<"Simple multiplication of "
            <<frac<<"x"<<nLoop<<" = "<<frac*nLoop<<endl;
    cout<<"Error = "<<(frac*nLoop-sum)/(frac*nLoop)*100
            <<"%"<<endl;
    
    //Exit Stage
    return 0;
}

