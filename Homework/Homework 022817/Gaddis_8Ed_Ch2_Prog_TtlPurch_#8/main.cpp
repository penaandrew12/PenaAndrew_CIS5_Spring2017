/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on February 26, 2017, 3:05 PM
 * Purpose: Total Purchase of Five Items
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    //Declare Variables
    float PrcItmOne=15.95f;         //Price of Item 1
    float PrcItmTwo=24.95f;         //Price of Item 2
    float PrcItmTre=6.95f;          //Price of Item 3
    float PrcItmFour=12.95f;        //Price of Item 4
    float PrcItmFive=3.95f;         //Price of Item 5
    float Ttl;                      //Total Purchase
    
    //Inputs-Outputs & Variables
    Ttl=PrcItmOne+PrcItmTwo+PrcItmTre+PrcItmFour+PrcItmFive;
    
    //Output Data 
    cout<<"$"<<PrcItmOne<<" + $"<<PrcItmTwo<<" + $"<<PrcItmTre
    <<" + $"<<PrcItmFour<<" + $"<<PrcItmFive<<" = "<<"$"<<Ttl<<" Total"<<endl;

  
    //Exit
    return 0;
}

