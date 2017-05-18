/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 16, 2017, 9:07 AM
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
void rdFile(char [],char [],int); //Read the answer key and student response
void wrtFile(string,int [],int); //Write the results
void Grde(char [],char [],int [],int); //Compare and grade
int score(int[],int); //Numerical result

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables 
    const int SIZE=20;
    char key[SIZE],stuResp[SIZE];
    int scr[SIZE]={};
    string keyFn,stuRFn,scoreFn;
    
    //Initialize String Variables
    keyFn="key.dat";
    char keyFnC[]="key.dat";
    stuRFn="answer.dat";
    scoreFn="results.dat";
    
    //Input Data
    rdFile(keyFnC,key,SIZE);
    rdFile(stuRFn,stuResp,SIZE);
    
    //Map Input or process the data
    Grde(key,stuResp,scr,SIZE);
    
    //Output the transformed data
    cout<<"Your Test Results score was = "<<score(scr,SIZE)<<endl;
    wrtFile(scoreFn,scr,SIZE);
    
    //Output Located Here

    //Exit
    return 0;
}

void wrtFile(string fn,int pts[],int n){
    //Declare File variables
    ofstream out;
    
    //Open File
    out.open(fn.c_str());
    
    //Read Values
    for(int i=0;i<n;i++){
        out<<pts[i]<<endl;
    }
        
    //Close File
    out.close();
}

int score(int pts[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=pts[i];
    }
    return sum;
}

void Grde(char key[],char stu[],int pts[],int n){
    for(int i=0;i<n;i++){
        if(key[i]==stu[i])pts[i]=1;
    }
}

void rdFile(char fn[],char a[],int n){
    //Declare File variables
    ifstream in;
    int cnt=0;
    
    //Open File
    in.open(fn);
    
    //Read Values
    while(in>>a[cnt++]&&cnt<n);
    
    //Close File
    in.close();
}

void rdFile(string fn,char a[],int n){
    //Declare File variables
    ifstream in;
    int cnt=0;
    
    //Open File
    in.open(fn.c_str());
    
    //Read Values
    while(in>>a[cnt++]&&cnt<n);
    
    //Close File
    in.close();
}