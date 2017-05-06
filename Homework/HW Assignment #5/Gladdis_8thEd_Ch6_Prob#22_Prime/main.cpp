 /* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 05, 2017, 5:30 PM
 * Purpose: Determine Whether Number is Prime or Not
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions

//Function Prototypes
int Prime(int);

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    int num=0, //Number
        p=0; //Value for Prime or not Prime
    
    cout<<"This program shows if a number is prime or not."<<endl;
    cout<<"If the number is not greater than 0 or a real integer, an error will output."<<endl;
    cout<<"Enter an Integer"<<endl;      
    cin>>num;
    
    //If Number is Invalid Error 
    if (num<=0){
        cout<<"Error"<<endl;
        return 0;
    }
    
    p=Prime(num);
    
    //Exit Stage
    return 0;

}

int Prime(int n){
    bool isPrime = true;
    for(int i=2;i<=n/2;++i){
      if(n%i==0){
          isPrime = false;
          break;
      }
    }
    if (isPrime)
      cout << "This is a prime number";
    else
      cout << "This is not a prime number";
    
    return n;
}

