/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 11, 2017, 11:20 AM
 * Purpose: Mark Sort 1 Function
 */

//System Libraries Here
#include <iostream>
#include <cstdlib> //Random Number Generator
#include <ctime> //Time to set for seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void filArry(int [],int);  //Fills Array with number
void prntArry(int[],int,int); //Print out results
void mrkSort(int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const int SIZE=100;
    int array[SIZE]={};
    
    //Input data Here
    filArry(array,SIZE);
    
    mrkSort(array,SIZE);
    
    prntArry(array,SIZE,10);

    
    //Exit
    return 0;
}

void mrkSort(int a[],int n){
    for(int pos=0;pos<n-1;pos++){
        for(int pos;pos<n;pos++){
            if(a[pos]>a[pos])swap(a[pos],a[pos]);
                int a=0,b=0,temp;
                temp=a;
                a=b;
                b=temp;
        }
    }
}

void prntArry(int a[],int n,int perLine){
    cout<<endl;
    for(int indx=0;indx<n;indx++){
        cout<<a[indx]<<" ";
        if(indx%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filArry(int a[],int n){
    for(int indx=0;indx<n;indx++){
        a[indx]=rand()%90+10; //Fill with 2 digit number
    }
}