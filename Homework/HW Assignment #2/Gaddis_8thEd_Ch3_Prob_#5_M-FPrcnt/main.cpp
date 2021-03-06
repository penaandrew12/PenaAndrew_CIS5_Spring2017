/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 9, 2017, 4:51 PM
 * Purpose: Male - Female Percentages in whole class
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PRCENT=100; //Percent Conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    float M,    //Amount of Males
          F,    //Amount of Females
          TtlStnds, //Total Students
          PrcntM,   //Percent Male
          PrcntF;   //Percent Female
    
    //Initialize variables
    cout<<"Number of Males = ";
    cin>>M;
    cout<<"Number of Females = ";
    cin>>F;
    
    //Input data
    TtlStnds=M+F;
    PrcntM=M/TtlStnds*PRCENT;
    PrcntF=F/TtlStnds*PRCENT;
    
    //Output the transformed data
    cout<<fixed<<setprecision(0);
    cout<<"Total Amount of Student in Class = "<<TtlStnds<<endl;
    cout<<"Percentage of Males = "<<PrcntM<<"%"<<endl;
    cout<<"Percentage of Females = "<<PrcntF<<"%"<<endl;
    
    //Exit stage!
    return 0;
}

