/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 29, 2017, 9:10 PM
 * Purpose:
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
    int Spd=0,
        Hrs=0,
        Dstnce;
    
    //Initialize variables
    cout<<"Speed of Car in MPH"<<endl;
    cin>>Spd;
    cout<<"Hours Traveled"<<endl;
    cin>>Hrs;
    cout<<"Hour     "<<"Distance Traveled in Miles"<<endl;
    cout<<"------------------------------"<<endl;
    
    //Input data
    if (Spd<=0){
        cout<<"Speed Must be Greater than 0"<<endl;
    }
        else if (Hrs<=0){
            cout<<"Hours Must be Greater than or Equal to 1"<<endl;
        }
            else for(int count=1;count<=Hrs;count++){
                Dstnce=Spd*count;
                cout<<count<<"        "<<Dstnce<<endl;
            }
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage!
    return 0;
}

