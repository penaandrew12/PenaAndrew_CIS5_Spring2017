/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 19, 2017, 3:15 PM
 * Purpose: Change for Dollar Game
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float Penny,    //Penny
            Dime,   //Dime
            Nikl,   //Nickel
            Qrtr,   //Quarter
            VPenny, //Conversion Penny to dollar
            VDime,  //Conversion Dime to dollar
            VNikl,  //Conversion Nickel to dollar
            VQrtr;  //Conversion Quarter to dollar
    float Dllr; ///Dollar
    
    cout<<"Let's Play A Game! Enter a certain amount"
            " of coins to reach exactly 1 dollar.\n";
    cout<<"Pennies = ";
    cin>>Penny;
    cout<<"Dime = ";
    cin>>Dime;
    cout<<"Nickels = ";
    cin>>Nikl;
    cout<<"Quarter = ";
    cin>>Qrtr;
    
    //Conversions to dollar
    VPenny=Penny*.01f;
    VDime=Dime*.10f;
    VNikl=Nikl*.05f;
    VQrtr=Qrtr*.25f;
    
    //Map inputs to outputs or process the data
    Dllr=VPenny+VDime+VNikl+VQrtr;
    

    //Output the transformed data
    if(Dllr='1'){
    cout<<"Congratulations! You Win! You Got Exactly One Dollar.\n";
    cout<<"$"<<Dllr<<endl;}
    else
        if(Dllr>'1'){
        cout<<"Sorry to Inform you, but you are not a winner.\n"
                "You Went Over a dollar.\n"
                "Try Again.\n";
        cout<<"$"<<Dllr<<endl;}
        else
            if(Dllr<'1'){
            cout<<"Sorry to Inform you, but you are not a winner.\n"
                "You were less than a dollar.\n"
                "Try Again.\n";
            cout<<"$"<<Dllr<<endl;}
            else
                
    //Exit stage!
    return 0;
}

