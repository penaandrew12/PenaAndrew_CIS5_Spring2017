/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 30, 2017, 10:32 AM
 * Purpose: ASCII Code Display
 */ 

//System Libraries
#include <iostream>     //Library
using namespace std;

//Global Constants

int main(int argc, char** argv) {
    //Map Inputs
    for(int i=0;i<=127;i++){
        cout<<static_cast<char>(i);
        if(i%16==15)cout<<endl;
    }
    
    //Exit Stage Right
    return 0;
}

