/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 14, 2017, 7:51 PM
 * Purpose: Color Mixer
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
    char Ylw, Ble, Rd;          //Yellow, Blue, Red
    char Prple, Ornge, Gren,   //Purple, Orange, Green
         FrstClr, ScndClr;      //First Color, Second Color
    
    //Map inputs to outputs or process the data
    cout<<"Of the Three Primary Colors (Yellow, Red, Blue)";
    cout<<" find out what colors form from being mixed of two\n";
    cout<<"First Color = ";
    cin>>FrstClr;
    cout<<"Second Color = ";
    cin>>ScndClr; 
    
    Prple=Rd*Ble;
    Ornge=Rd*Ylw;
    Gren=Ble*Ylw;
    
        if (FrstClr='Rd'ScndClr='Ble'){
        cout<<"If Red and Blue mix it makes Purple";}
        else
            
            if(FrstClr='Rd',ScndClr='Ylw'){
            cout<<"If Blue and Yellow mix it makes Orange"; }   
            else
                
                if(FrstClr='Ble',ScndClr='Ylw'){
                cout<<"If Blue and Yellow mix it makes Green"; }
                else cout<<"Can not be determined with given colors";
    
    //Exit stage!
    return 0;
}

