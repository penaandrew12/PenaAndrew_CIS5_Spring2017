/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 19, 2017, 3:00 PM
 * Purpose: Mass and Weight Calculation
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
    int Wght,Mas;   //Weight of Object, Mass of Object
    
    //Output the transformed data
    cout<<"Mass of Object = ";
    cin>>Mas;
    
    Wght=Mas*9.8f;
    
    if (10>Wght){
        cout<<"If object is less then 10 newtons ";
        cout<<"it is too light to weigh\n";
    }
    else   
        if (1000<Wght){
            cout<<"If object is greater than 1000 newtons ";
            cout<<"it is too heavy to weigh\n";
        } 
        else
            
    cout<<"Weight of Object is = "<<Wght<<" newtons"<<endl;
    
    //Exit stage!
    return 0;
}

