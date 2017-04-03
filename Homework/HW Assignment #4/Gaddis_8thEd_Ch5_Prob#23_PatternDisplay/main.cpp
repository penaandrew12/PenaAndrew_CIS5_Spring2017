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
    cout<<"Pattern A            Pattern B"<<endl;
    cout<<"------------------------------"<<endl;
    
    //output
    int n=10;
    
    for (int y = 1; y <= n; y++){
    for (int x = 1; x <= n; x++)
    if ((x == y) || (y == x)) cout << " ";
    else cout << "+";
    cout << endl;
    }
    
    //Exit stage!
    return 0;
}