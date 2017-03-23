/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 23, 2017, 11:30 AM
 * Purpose: Sum 1 to N
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
    int n=10000, sum=0;
    
    //Input values
    for(int i=1;1<=n;i++){
        sum+=i;
    }
    
    //Output Located
    cout<<"the computed sum of 1 to "<<n<<" = "<<sum<<endl;
    cout<<"and "<<n<<"*("<<n<<"+1/2="<<n*(n+1)/2<<endl;
    
    //Exit Stage
    return 0;
}

