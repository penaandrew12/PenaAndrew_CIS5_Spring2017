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
    char Y, B, R;            //Yellow, Blue, Red
    char P, O, G,            //Purple, Orange, Green
         MxdClr,             //Mixed Color
         FrstClr, ScndClr;   //First Color, Second Color
  
    
    //Map inputs to outputs or process the data
    cout<<"Of the Three Primary Colors [Y]ellow, [R]ed, [B]lue";
    cout<<" find out what colors form from being mixed of two.\n";
    cout<<"If you do not input Blue as B, Red as R, or Yellow as Y, ";
    cout<<"An error message will appear."<<endl;
    cout<<"First Color = ";
    cin>>FrstClr;
    cout<<"Second Color = ";
    cin>>ScndClr;

    MxdClr=FrstClr*ScndClr;
    P=R*B;
    O=R*Y;
    G=B*Y;
            
    if (P){
    cout<<"If Red and Blue mix it makes Purple";}
            
        else if(O){
        cout<<"If Blue and Yellow mix it makes Orange";}   
               
            else if(G){
            cout<<"If Blue and Yellow mix it makes Green";}
    
                    else{
                    cout<<"Can not be determined with given colors";}
    
    //Exit stage!
    return 0;
}

