/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 18, 2017, 11:20 AM
 * Purpose: Grading System 
 */

//System Libraries Here
#include <iostream> //Main Library
#include <fstream> //Reading/Writing Files
#include <vector> //STL Vector -> Dynamic Array
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void rdFile(char [],vector<char> &); //Read the answer key and student response
void wrtFile(string,vector<int> &); //Write the results
void Grde(vector<char> &,vector<char> &,vector<int> &); //Compare and grade
int score(vector<int> &); //Numerical result

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables 
    const int SIZE=20;
    vector<char> key(SIZE); //Answer Key for test
    vector<char> stuResp(SIZE);  //Student Response text doc
    vector<int> scr(SIZE);  //Score
    string scoreFn;
    
    //Initialize String Variables
    char keyFnC[]="key.dat";
    char stuRFnC[]="answer.dat";
    scoreFn="results.dat";
    
    //Input Data
    rdFile(keyFnC,key); //Read file from key text doc
    rdFile(stuRFnC,stuResp);    //Read file from answer text doc
    
    //Map Input or process the data
    Grde(key,stuResp,scr); //Calls from Function of Grading
    
    //Output the transformed data
    cout<<"Your Test Results score was = "<<score(scr)<<endl;
    wrtFile(scoreFn,scr);  //Write File to Results doc
    
    //Output Located Here

    //Exit
    return 0;
}

void wrtFile(string fn,vector<int> &pts){
    //Declare File variables
    ofstream out;
    
    //Open File
    out.open(fn.c_str());
    
    //Read Values
    for(int i=0;i<pts.size();i++){
        out<<pts[i]<<endl;
    }
        
    //Close File
    out.close();
}

int score(vector<int> &pts){
    int sum=0;
    for(int i=0;i<pts.size();i++){
        sum+=pts[i];
    }
    return sum;
}

void Grde(vector<char> &key,vector<char> &stu,vector<int> &pts){
    for(int i=0;i<pts.size();i++){
        if(key[i]==stu[i])pts[i]=1;
    }
}

void rdFile(char fn[],vector<char> &a){
    //Declare File variables
    ifstream in;
    int cnt=0;
    
    //Open File
    in.open(fn);
    
    //Read Values
    while(in>>a[cnt++]&&cnt<a.size());
    
    //Close File
    in.close();
}