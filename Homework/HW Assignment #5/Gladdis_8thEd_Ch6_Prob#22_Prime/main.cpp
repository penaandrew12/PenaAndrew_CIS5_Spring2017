 /* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 03, 2017, 11:30 AM
 * Purpose: Mark-Up
 */

//System Libraries 
#include <iostream>
#include <iomanip> //Format Library
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions

//Function Prototypes
int Prime(int);

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    int num=0; //Number
    
    cout<<"This program shows if number is prime or not."<<endl;
    cout<<"If an integer number is not greater than 0 error will output."<<endl;
    cout<<"Enter an Integer"<<endl;      
    cin>>num;
    
    if (num<=0){
        cout<<"Error"<<endl;
    }
    
    Prime(num);
    
    //Exit Stage
    return 0;

}

int Prime(int a){
    bool isPrime = true;
    for(int i = 2; i <= a / 2; ++i){
        bool isPrime = true;
        if(a % i == 0){
        isPrime = false;
        break;
        }
    }
            if (isPrime==true){
            cout << "This is a prime number";
            }
            else
            cout << "This is not a prime number";
    
    return a;
}

