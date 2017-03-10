/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 9, 2017, 3:51 PM
 * Purpose: Loan Calculation
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip> //System Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float YEAR=12.0f;      //Months to 1 Year
const float PERCENT=0.01f;    //Percentage Conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float FVLoan,       //Face Value in Dollars 
            IntrstRte,  //Interest Rate from percent 
            Mnths;     //Duration Kept in Months 
    float TtlIntrst,      //Total Interest 
            DsrdAmnt,      //Desired Amount   
            MnthlyPaymts;   //Monthly Payments   
    float TtlMnths,         //Total Months in Years
            TtlIntrstRte;   //Total Interest
    
    //Initialize variables
    cout<<"Amount of Desired Money = $";
    cin>>DsrdAmnt;        
    cout<<"Interest Rate Percent = ";
    cin>>IntrstRte;
    cout<<"Months = ";
    cin>>Mnths;
    
    //Input data
    TtlMnths=Mnths/YEAR;
    TtlIntrstRte=IntrstRte*PERCENT;
    FVLoan=DsrdAmnt/(1-(TtlIntrstRte*TtlMnths));
    MnthlyPaymts=FVLoan/Mnths;
    TtlIntrst=FVLoan*TtlIntrstRte*TtlMnths;
    
    //Output the transformed data
    cout<<fixed<<setprecision(2);
    cout<<"Amount of Face Value For Desired Amount = $"<<FVLoan<<endl;
    cout<<"Monthly Payment = $"<<MnthlyPaymts<<endl;
    cout<<"Total Interest = $"<<TtlIntrst<<endl;
    
    //Exit stage!
    return 0;
}

