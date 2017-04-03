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
    int a,b,x,y;
    cout<<"Pattern A    "<<endl;
    cout<<"-----------------"<<endl;
    
    //output
    for(x=1;x<=10;x++){
    for(y=1;y<=x;y++){
    cout<<"+";
    }
    cout<<endl;
    }
    cout<<"-----------------"<<endl;

    cout<<"Pattern B"<<endl;
    cout<<"-----------------"<<endl;
            
        for(a=10;a>=1;a--){
        for(b=1;b<=a;b++){
        cout<<"+";
        }
        cout<<endl;
        }
    cout<<"-----------------"<<endl;
    
    //Exit stage!
    return 0;
}