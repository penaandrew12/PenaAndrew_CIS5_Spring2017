/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 18, 2017, 1:32 PM
 * Purpose: Determine how many points a person has from buying books
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int Bk,            //Books Bought
        Pnts;          //Points 
    
    //Initialize variables
    cout<<"This Program will determine how many points you currently have."<<endl;
    cout<<"How many Books have you purchased within the last month?"<<endl;
    cin>>Bk;
            
        if (Bk<0)                           //Integer less than 0 Invalid Number
        {   cout<<"INVALID NUMBER"<<endl;
            return 1;
        }
    
    //Map inputs to outputs or process the data
    if(Bk==0)    Pnts=0;
    if(Bk==1)    Pnts=5;
    if(Bk==2)    Pnts=15;
    if(Bk==3)    Pnts=30;
    else         Pnts=60;
          
    //Output the transformed data
    cout<<"You currently have a total of "<<Pnts<<" Points."<<endl;
          
    //Exit stage!
    return 0;
}

