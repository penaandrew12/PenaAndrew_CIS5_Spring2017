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
const int COLS=3;   //

//Function Prototypes Here
void rdFile(char [],char[],char [][COLS],int); //Read the answer key and student response
void wrtFile(string,char [][COLS],int); //Write the results
void Grde(char [][COLS],int); //Compare and grade
int score(char [][COLS],int); //Numerical result

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables 
    const int SIZE=20;
    char kyRspScr[SIZE][COLS]={};
    string scoreFn;
    
    //Initialize String Variables
    char keyFnC[]="key.dat";
    char stuRFnC[]="answer.dat";
    scoreFn="results.dat";
    
    //Input Data
    rdFile(keyFnC,stuRFnC,kyRspScr,SIZE);
    
    //Map Input or process the data
    Grde(kyRspScr,SIZE);
    
    //Output the transformed data
    cout<<"Your Test Results score was = "<<score(kyRspScr,SIZE)<<endl;
    wrtFile(scoreFn,kyRspScr,SIZE);
    
    //Output Located Here

    //Exit
    return 0;
}

void wrtFile(string fn,char krp[][COLS],int n){
    //Declare File variables
    ofstream out;
    
    //Open File
    out.open(fn.c_str());
    
    //Read Values
    for(int i=0;i<n;i++){
        out<<static_cast<int>(krp[i][2])<<endl;
    }
        
    //Close File
    out.close();
}

int score(char krp[][COLS],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=krp[i][2];
    }
    return sum;
}

void Grde(char krp[][COLS],int n){
    for(int i=0;i<n;i++){
        if(krp[i][0]==krp[i][1])krp[i][2]=1;
    }
}

void rdFile(char fn1[],char fn2[],char krp[][COLS],int n){
    //Declare File variables for the Key File
    ifstream in1;
    int cnt1=0;
    //Open File
    in1.open(fn1);
    //Read Values
    while(in1>>krp[cnt1++][0]&&cnt1<n);
    //Close File
    in1.close();
    
    //Declare File variables for the Response File
    ifstream in2;
    int cnt2=0;    
    //Open File
    in2.open(fn2);
    //Read Values
    while(in2>>krp[cnt2++][1]&&cnt2<n);
    //Close File
    in2.close();
}