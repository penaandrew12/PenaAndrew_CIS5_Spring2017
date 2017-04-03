/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on April 03, 2017, 12:30 PM
 * Purpose: Menu
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Show Menu and Loop
    do{
        //Display Menu
        cout<<endl<<endl<<"Type 0 or Anything Else to Exit"<<endl;
        cout<<"Type 1 for Problem 1"<<endl;
        cout<<"Type 2 for Problem 3"<<endl;
        cout<<"Type 3 for Problem 4"<<endl;
        cout<<"Type 4 for Problem 5"<<endl;
        cout<<"Type 5 for Problem 6"<<endl;
        cout<<"Type 6 for Problem "<<endl;
        cout<<"Type 7 for Problem "<<endl;
        cout<<"Type 8 for Problem "<<endl;
        cout<<"Type 9 for Problem "<<endl<<endl;
        
        //Input Choice
        cin>>choice;
        
        //Place Solutions to Problems in Switch Statement
        switch(choice){
            case '1':{
                //Declare variables
                int DNum,
                    count,
                    sum;

                //Input data
                cout<<"This Program will get the sum of adding the integers you have entered starting from 1."<<endl;
                cout<<"Enter a Real Number other than a Negative, 0, and 1."<<endl;
                cout<<"If a Negative, 0, or 1 is Entered it will Not Compute."<<endl;
                cin>>sum;
                cout<<"If you were to add all integers from 1 to "<<sum<<endl;

                //Output the transformed data
                for(count=1;count<=sum;count++){
                DNum=sum*(sum+1)/2;
                }

                cout<<"You would get = "<<DNum<<endl;
                break;
            }
            case '2':{
                //Declare variables
                int Count=0;    //Number to Start

                //Input data
                cout<<"This Program will calculate A Rising Sea Level for 25 years if it rises by 1.5 Millimeters Per Year"<<endl;
                cout<<"Press Enter to Display Table."<<endl;
                cin.get();
                cout<<"Year          Amount Risen"<<endl;
                cout<<"--------------------------"<<endl;

                //Output the transformed data
                for(Count=1;Count<=9;Count++)
                    cout<<Count<<" Years       "<<(Count*1.5f)<<" Millimeters"<<endl;
                for(Count=10;Count<=25;Count++)
                    cout<<Count<<" Years      "<<(Count*1.5f)<<" Millimeters"<<endl;
                break;
            }
            case '3':{
                //Declare variables
                int Min=5,
                    Incrmnt=5;

                //Input data
                cout<<"This Program will determine how many calories are burned per 5 minutes."<<endl;
                cout<<"It will start at 5 minutes and increment by 5 up to 30 minutes."<<endl;
                cout<<"It will use 3.6 Calories burned per minute."<<endl;

                for(Min=5;Min<=30;Min+=Incrmnt){
                    cout<<"In "<<Min<<" Minutes "<<(Min*3.6)<<" Calories will be Burned"<<endl;
                }
                break;
            }
            case '4':{
                //Declare variables
                int CrrntChrge=2500,
                    Yr=1;
                float MembrShipFee=.04f;

                //Input data
                cout<<"Current Membership Cost $2500. Each Year it will increase by 4%. "
                        "This will show up to six years of the Increasing Membership Fee."<<endl;
                for(Yr=1;Yr<=6;Yr++){
                    CrrntChrge=CrrntChrge+(CrrntChrge*MembrShipFee);
                    cout<<"Year "<<Yr<<" New Membership Charge is $"<<CrrntChrge<<". "
                            "Increase of $"<<(CrrntChrge*MembrShipFee)<<endl;
                }
                break;
            }
            case '5':{
                //Declare variables
                int Spd=0,
                    Hrs=0,
                    Dstnce;

                //Initialize variables
                cout<<"Speed of Car in MPH"<<endl;
                cin>>Spd;
                cout<<"Hours Traveled"<<endl;
                cin>>Hrs;
                cout<<"Hour     "<<"Distance Traveled in Miles"<<endl;
                cout<<"------------------------------"<<endl;

                //Input data
                if (Spd<=0){
                    cout<<"Speed Must be Greater than 0"<<endl;
                }
                    else if (Hrs<=0){
                        cout<<"Hours Must be Greater than or Equal to 1"<<endl;
                    }
                        else for(int count=1;count<=Hrs;count++){
                            Dstnce=Spd*count;
                            cout<<count<<"        "<<Dstnce<<endl;
                        }
                break;
            }
            case '6':{
                cout<<"In Problem Solution 6"<<endl;
                break;
            }
            case '7':{
                cout<<"In Problem Solution 7"<<endl;
                break;
            }
            case '8':{
                cout<<"In Problem Solution 8"<<endl;
                break;
            }
            case '9':{
                cout<<"In Problem Solution 9"<<endl;
                break;
            }
            default:{
                cout<<"Exit the Program"<<endl;
            }
        }
        
    }while(choice>='1'&&choice<='9');
    
    //Exit stage!
    return 0;
}

