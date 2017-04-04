/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on April 04, 2017, 11:54 AM
 * Purpose:
 */

//System Libraries 
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries 

//Global Constants Only

//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //First Factorial
    int n,Fact=1;  //Product
    float Divd=1;
    cout<<"Input N = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        Fact*=i;
        cout<<n<<"  "<<Fact<<endl;
    }
    cout<<endl<<endl;
    
    //Second Factorial
    float x;
    cout<<"Type in X = ";
    cin>>x;
    float Prod=1;
    for(int n=1;n<=13;n++){
        for(int i=1;i<=n;i++){
        Fact*=i;
        }
        Prod+=pow(x,n)/(1/Divd);
    }
    cout<<x<<"  "<<Prod<<endl;
    cout<<endl<<endl;
    
    //Third Factorial
    int term;
    float ex=1.0f,tol=1e-7f;
    for(float i=1.0f;term=1.0f; term>=tol); term*=(x/i), ex+=term, i++);
    cout<<"e^"<<x<<"ex"<<endl;
    
    //Exit Stage
    return 0;
}

