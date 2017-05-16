/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 05, 2017, 12:00 PM
 * Purpose: Linear Search
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
    int input[12];
    
    //Input Data
    cout<<"Input Variables now: "<<endl;
    for(int i=0;i<12;i++){
    cin>>input[i];
    }
    cout<<endl;
    
    //Variable to be Searched for
    cout<<"Enter Number Desired to be Searched for in Program = ";
    int n;
    cin>>n;
    cout<<endl;
    
    //Search for variable n
    int index=0;
    int postion=-1;
    bool found=false;
    
    
    //Exit Stage
    return 0;
}

int linSrch(int a[],int b, int e, int val){
    for(int i=b;i<e;i++)
        cout<<a[i]<<" ";
    if(i%perLine==(perLine-1))cout<<endl;
}

void fllArry(int a[],int n,int mod){
    for(int i=0;i<n;i++){
        a[i]=i%mod;
    }
}