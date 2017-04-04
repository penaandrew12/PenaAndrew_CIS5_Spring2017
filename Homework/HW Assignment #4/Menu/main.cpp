/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on April 03, 2017, 12:30 PM
 * Purpose: Menu For Chapter 5 Problems
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>    //Power
#include <iomanip>  //Format
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;        //Choice for Menu
    
    //Show Menu and Loop
    do{                 //Begin Menu Loop
        //Display Menu
        cout<<endl<<endl<<"Type 0 or Anything Else to Exit"<<endl;
        cout<<"Type 1 for Problem 1"<<endl;
        cout<<"Type 2 for Problem 3"<<endl;
        cout<<"Type 3 for Problem 4"<<endl;
        cout<<"Type 4 for Problem 5"<<endl;
        cout<<"Type 5 for Problem 6"<<endl;
        cout<<"Type 6 for Problem 7"<<endl;
        cout<<"Type 7 for Problem 10"<<endl;
        cout<<"Type 8 for Problem 12"<<endl;
        cout<<"Type 9 for Problem 23"<<endl<<endl;
        
        //Input Choice
        cin>>choice;        //Input Choice
        
        //Place Solutions to Problems in Switch Statement
        switch(choice){
            case '1':{                      //Chapter 5 Problem #1
                //Declare variables
                int DNum,   //Sum of adding Numbers
                    count,  //count for Loop
                    sum;    //Input of Number desired to add sum to

                //Input data
                cout<<"This Program will get the sum of adding the integers you have entered starting from 1."<<endl;
                cout<<"Enter a Real Number other than a Negative, 0, and 1."<<endl;
                cout<<"If a Negative, 0, or 1 is Entered it will Not Compute."<<endl;
                cin>>sum;
                cout<<"If you were to add all integers from 1 to "<<sum<<endl;

                //Output the transformed data
                for(count=1;count<=sum;count++){    //For Loop
                DNum=sum*(sum+1)/2;
                }

                cout<<"You would get = "<<DNum<<endl;
                break;
            }
            case '2':{                      //Chapter 5 Problem #3
                //Declare variables
                int Count=0;    //Number to Start

                //Input data
                cout<<"This Program will calculate A Rising Sea Level for 25 years if it rises by 1.5 Millimeters Per Year"<<endl;
                cout<<"Press Enter to Display Table."<<endl;
                cin.get();
                cout<<"Year          Amount Risen"<<endl;
                cout<<"--------------------------"<<endl;

                //Output the transformed data
                for(Count=1;Count<=9;Count++)       //Loop for Years 1-9
                    cout<<Count<<" Years       "<<(Count*1.5f)<<" Millimeters"<<endl;
                for(Count=10;Count<=25;Count++)     //Loop for Years 10-20
                    cout<<Count<<" Years      "<<(Count*1.5f)<<" Millimeters"<<endl;
                break;
            }
            case '3':{                       //Chapter 5 Problem #4
                //Declare variables
                int Min=5,         //Starting Minute 
                    Incrmnt=5;     //Increment for loop increase

                //Input data
                cout<<"This Program will determine how many calories are burned per 5 minutes."<<endl;
                cout<<"It will start at 5 minutes and increment by 5 up to 30 minutes."<<endl;
                cout<<"It will use 3.6 Calories burned per minute."<<endl;

                for(Min=5;Min<=30;Min+=Incrmnt){        //Loop for Minute
                    cout<<"In "<<Min<<" Minutes "<<(Min*3.6)<<" Calories will be Burned"<<endl;
                }
                break;
            }
            case '4':{                      //Chapter 5 Problem #5
                //Declare variables
                int CrrntChrge=2500,        //Current Charge of Membership Fee
                    Yr=1;                   //Starting from year 1
                float MembrShipFee=.04f;    //Membership Fee Increase Percent

                //Input data
                cout<<"Current Membership Cost $2500. Each Year it will increase by 4%. "
                        "This will show up to six years of the Increasing Membership Fee."<<endl;
                for(Yr=1;Yr<=6;Yr++){       //Loop for Year and Increasing Membership Fee
                    CrrntChrge=CrrntChrge+(CrrntChrge*MembrShipFee);
                    cout<<"Year "<<Yr<<" New Membership Charge is $"<<CrrntChrge<<". "
                            "Increase of $"<<(CrrntChrge*MembrShipFee)<<endl;
                }
                break;
            }
            case '5':{                      //Chapter 5 Problem #6
                //Declare variables
                int Spd=0,      //Input for Speed of Car in MPH
                    Hrs=0,      //Hours Spent Driving
                    Dstnce;     //Distance Traveled in Miles

                //Initialize variables
                cout<<"Speed of Car in MPH"<<endl;
                cin>>Spd;
                cout<<"Hours Traveled"<<endl;
                cin>>Hrs;
                cout<<"Hour     "<<"Distance Traveled in Miles"<<endl;
                cout<<"------------------------------"<<endl;

                //Input data
                if (Spd<=0){    //Error if Speed if Less than or Equal to 0 
                    cout<<"Speed Must be Greater than 0"<<endl;
                }
                else if (Hrs<=0){       //Error if Hours Traveled if Less than or Equal to 0
                        cout<<"Hours Must be Greater than or Equal to 1"<<endl;
                    }
                else for(int count=1;count<=Hrs;count++){   //Loop for Counting Hours
                            Dstnce=Spd*count;          //Formula for Distance
                            cout<<count<<"        "<<Dstnce<<endl;
                        }
                break;
            }
            case '6':{      //Chapter 5 Problem #7
                int Days=1,     //Days to use for Loop
                    DaysDsrd;   //Input for Days Desired top Calculate

                //Initialize variables
                cout<<"Number of Days = ";
                cin>>DaysDsrd;

                //Input data
                if (DaysDsrd<0){    //Error if Days is less than 0

               cout<<"Invalid Input for Days."<<endl;
                }        
                    else for(int Days=0;Days<2;Days++){     //Loop for Days 0-1
                            cout<<"Day "<<Days<<" Earned $"<<((pow(2,Days))*.01)-.01<<endl;
                            }
                            for(int Days=2;Days<=DaysDsrd;Days++){  //Loop for Days 2-Days Inputed
                                cout<<"Day "<<Days<<" Earned $"<<((pow(2,Days))/2)*.01<<endl;
                            }
                break;
            }
            case '7':{      //Chapter 5 Problem #10
                int YrsInpt;    //Years Input
                float total,    //Total Inch Of Rain
                      average,  //Average Inch of Rain Per Year
                      InchInpt; //Input of Inches Per Month

                //Number of Years
                cout<<"This Program will Calculate The Average Inch of Rain Per Month Each Year."<<endl;
                cout<<"Must Enter Year as Whole Number, If Year is not complete just fill with 0 until complete."<<endl;
                cout<<"If Year is anything other than a whole number, Program will not work."<<endl;
                cout<<"Number of Years = ";
                cin>>YrsInpt;
                if(YrsInpt<=0)  //Error if Years Input less than or Equal to 0
                cout<<"Invalid Input"<<endl;

                else for(int Yrs=1;Yrs<=YrsInpt;Yrs++){     //Loop foir Years
                    for(int Mnth=1;Mnth<=12;Mnth++){        //Loop for Months
                        cout<<"Enter Year "<<Yrs<<", Month "<<Mnth<<", Amount of Rain in Inches."<<endl;
                        cin>>InchInpt;
                        total+=InchInpt;
                    }  
                    average=total/(12);
                    cout<<"The Average Inch of Rain Per Month for Year "<<Yrs;
                    cout<<" is "<<average<<" Inches"<<endl<<endl<<endl;
                }
                break;
            }
            case '8':{      //Chapter 5 Problem #12
                float F,  //Fahrenheit
                      C;  //Celsius

                //Initialize variables
                cout<<"This Program will Display a Table from 0 to 20 Degrees Celsius and convert it to Fahrenheit."<<endl;
                cout<<"Celsius        Fahrenheit"<<endl;
                cout<<"-------------------------"<<endl;

                //Output the transformed data
                for(int C=0;C<=9;C++){      //Loop for Conversion 0-9
                    F=32+1.8*C;         //Fahrenheit to Celsius Conversion
                    cout<<C<<"              "<<F<<endl;
                }
                for(int C=10;C<=20;C++){    //Loop for Conversion 10-20
                    F=32+1.8*C;         //Fahrenheit to Celsius Conversion
                    cout<<C<<"             "<<F<<endl;
                }    
                break;
            }
            case '9':{      //Chapter 5 Problem #23
                int a,b,x,y;        //Terms Used to Create Certain Pattern
                cout<<"Pattern A    "<<endl;
                cout<<"-----------------"<<endl;

                //Loop To Create Pyramid Increase to One
                for(x=1;x<=10;x++){
                for(y=1;y<=x;y++){      
                cout<<"+";
                }
                cout<<endl;
                }
                cout<<"-----------------"<<endl;

                //Loop To Create Pyramid Decrease from One
                cout<<"Pattern B"<<endl;
                cout<<"-----------------"<<endl;

                    for(a=10;a>=1;a--){
                    for(b=1;b<=a;b++){
                    cout<<"+";
                    }
                    cout<<endl;
                    }
                cout<<"-----------------"<<endl;
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

