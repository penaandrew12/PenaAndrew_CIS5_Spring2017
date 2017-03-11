/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 11, 2017, 1:56 PM   
 * Purpose: Practice Programming
 */

#include <iostream>     //Library  
#include <iomanip>      //Library

using namespace std;

int main(int argc, char** argv) {
    
    int begInv,
            sold, 
            store1,
            store2,
            store3;
    
    cout<<"One week ago, 3 new widget stores opened\n";
    cout<<"at the same time with the same beginning\n";
    cout<<"inventory. What was the beginning inventory? ";
    cin>>begInv;
    
    store1=store2=store3=begInv;
            
    cout<<"How many widgets has store 1 sold? ";
    cin>>sold;
    store1-=sold;
    
    cout<<"How many widgets has store 2 sold? ";
    cin>>sold;
    store2-=sold;
    
    cout<<"How many widgets has store 3 sold? ";
    cin>>sold;
    store3-=sold; //symbol -= is used for easier operation
    
    cout<<"\nThe current inventory of each store"; //symbol \n is to make new line
    cin.get();          //Pauses Program
    cin.ignore();       //Ignore is needed if cin>> is inputed
    cout<<fixed<<setprecision(3);  //Used to cut-off variable if needed
    cout<<"Store 1; "<<left<<setw(4)<<store1<<endl;         //Left sets variable to left margin
    cout<<"Store 2; "<<right<<setw(4)<<store2<<endl;        //setw(#)sets variable however many places
    cout<<"Store 3; "<<setw(4)<<store3<<endl;
    
    return 0;
}

