/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 19, 2017, 6:51 PM
 * Purpose: Calculate the Area of a Rectangle
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare     variables
    float Lngth1,
          Wdth1,
          Lngth2,
          Wdth2,
          Rctngle1,
          Rctngle2;

    //Input data
    cout<<"This program will determine between two rectangles which has the greater area."<<endl;
    cout<<"It will also determine if they are equal."<<endl;
    cout<<"Width of First Rectangle = ";
    cin>>Wdth1;
    cout<<"Length of First Rectangle = ";
    cin>>Lngth1;
    cout<<"Width of Second Rectangle = ";
    cin>>Wdth2;
    cout<<"Length of Second Rectangle = ";
    cin>>Lngth2;
                    
                    
    //Map inputs to outputs or process the data
    Rctngle1=Lngth1*Wdth1;
    Rctngle2=Lngth2*Wdth2;
    
    //Output the transformed data
    if(Rctngle1==Rctngle2){
        cout<<"They have an equal area of "<<Rctngle1<<endl;}
        else if(Rctngle1<Rctngle2){
             cout<<"The First Rectangle has a smaller area than the Second Rectangle."<<endl;}    
            else if(Rctngle1>Rctngle2){
                 cout<<"The First Rectangle has a Bigger area than the Second Rectangle."<<endl;} 
    
    //Exit stage!
    return 0;
}

