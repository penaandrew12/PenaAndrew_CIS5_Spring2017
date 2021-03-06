/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 11, 2017, 10:20 AM
 * Purpose: Mark Sort
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
void swap1(int &,int &);
void swap2(int &,int &);
void smlstVl(int [],int,int);
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
    prntArry(array,SIZE,10);
    
    mrkSort(array,SIZE);
            
    //smlstVl(array,SIZE,0);
    
    //swap2(array[0],array[SIZE-1]);//Test for swap 1 or 2
    
    //Output Located Here
    prntArry(array,SIZE,10);

    //Exit
    return 0;
}

void mrkSort(int a[],int n){
    for(int indx=0;indx<n-1;indx++){
        smlstVl(a,n,indx);
    }
}

void smlstVl(int a[],int n,int pos){
    for(int indx=pos;indx<n;indx++){
        if(a[pos]>a[indx])swap2(a[pos],a[indx]);
    }
}
    
//Temporary variable intermediate swap
void swap1(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

//Logical variable intermediate swap
void swap2(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
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