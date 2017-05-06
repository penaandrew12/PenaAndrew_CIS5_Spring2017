/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 04, 2016, 9:07 AM
 * Purpose: Life
 */

//System Libraries Here
#include <iostream> //Main Library
#include <iomanip>  //Format Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PERCENT=100.0f; //Conversion to Percent

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int Start=0,    //Start Date for Working
        End=0,      //Desired Year to Stop Working
        Wrkd=1;     //Worked years count
    float Balnce=0, //Initial Balance
          IntrstRte=0,  //Interest Rate
          Slry=0,       //Salary
          Need=0,       //Need to live off Interest alone
          Per=0,        //Percent Rate off Savings
          Dpsit=0,      //Deposit put into Savings
          Intrst=0;     //Interest Earned
    
    
    //Input or initialize values Here
    cout<<"Enter Salary Amount = $";
    cin>>Slry;
    cout<<"Savings Current Balance = $";
    cin>>Balnce;
    cout<<"Enter Interest Rate in Percent Gained on Savings Account = ";
    cin>>IntrstRte;
    cout<<"Input Starting Year = ";
    cin>>Start;
    cout<<"Input Year to Stop Working = ";
    cin>>End;
    
    //Process/Calculations Here
    cout<<fixed<<setprecision(2)<<endl;
    Need=Slry/(IntrstRte/PERCENT);
    
    //Output Located Here
    cout<<"You have a Current Balance of $"<<Balnce<<endl;
    cout<<"Your Current Salary is $"<<Slry<<" per year."<<endl;
    cout<<"If you would like to have this salary for retirement you would need to get $"<<Need<<" Dollars."<<endl;
    cout<<"How Much percent of your Salary would you like to save for retirement per year?"<<endl; 
    cin>>Per;
    
    Dpsit=Slry*(Per/PERCENT);
    Intrst=Balnce*(IntrstRte/PERCENT);
    
    cout<<"Year         Balance         Interest            Deposit     Years Worked"<<endl;
    cout<<setw(1)<<Start<<setw(18)<<Balnce<<setw(17)<<Intrst<<setw(19)<<Dpsit<<setw(17)<<"0"<<endl;
    
    //Loop for Table
    for (int year=Start+1;year<=End;year++){
        Balnce=Balnce+Dpsit+Intrst;
        Intrst=Balnce*(IntrstRte/PERCENT);
        cout<<setw(1)<<year<<setw(18)<<Balnce<<setw(17)<<Intrst<<setw(19)<<Dpsit<<setw(17)<<Wrkd++<<endl;

    }
    
    //Exit
    return 0;
}

