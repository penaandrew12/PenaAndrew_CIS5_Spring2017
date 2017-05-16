/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 16, 2016, 9:07 AM
 * Purpose: Grading System
 */

//System Libraries Here
#include <iostream>
#include <fstream> //Reading/Writing Files
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void rdFile(string,char [],int); //Read the answer key and student response
void wrtFile(string,int [],int); //Write the results
void Grde(char [],char [],int [],int); //Compare and grade
int score(int[],int); //Numerical result

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables 
    
    //Input Data
    
    //Map Input or process the data
    
    //Output the transformed data
    
    //Output Located Here

    //Exit
    return 0;
}

void wrtFile(string fn,int pts[],int s){
    //Declare File variables
    ofstream out;
    
    //Open File
    out.open(fn.c_str());
    
    //Read Values
    for(int i=0;i<s;i++){
        out<<pts[i]<<endl;
    }
        
    //Close File
    out.close();
}

int score(int pts[],int s){
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=pts[i];
    }
    return sum;
}

void Grde(char key[],char stu[],int pts[],int s){
    for(int i=0;i<s;i++){
        if(key[i]==stu[i])pts[i]=1;
    }
}

void rdFile(string fn,int a[],int s){
    //Declare File variables
    ifstream in;
    int cnt=0;
    
    //Open File
    in.open(fn.c_str());
    
    //Read Values
    while(in>>a[cnt++]);
    
    //Close File
    in.close();
}