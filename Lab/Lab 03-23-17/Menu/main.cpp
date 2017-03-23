/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 23, 2017, 12:05 PM
 * Purpose: Menu to be utilized 
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants Only

//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    char choice;
    
    //Show Menu and Loop
    do{
        //Display Menu
        cout<<endl<<endl<<"Type 0 to Exit"<<endl;
        cout<<"Type 1 for Sum 1 to N Problem"<<endl;
        cout<<"Type 2 for Sum 0.1 Error Problem"<<endl;
        cout<<"Type 3 for Problem 3"<<endl;
        cout<<"Type 4 for Problem 4"<<endl;
        cout<<"Type 5 for Problem 5"<<endl;
        cout<<"Type 6 for Problem 6"<<endl;
        cout<<"Type 7 for Problem 7"<<endl;
        cout<<"Type 8 for Problem 8"<<endl;
        cout<<"Type 9 for Problem 9"<<endl<<endl;
        
        //Input Choice
        cin>>choice;
        
        //Place Solutions to Problems in Switch Statement
        switch(choice){
            case '1':{
                //Declare all Initialize Variables
                //Make sure 0<=n<=40000
                int n=40000,sum=0;

                //Input values
                for(int i=1;i<=n;i++){
                    sum+=i;
                }

                //Output Located
                cout<<"The computed sum of 1 to "<<n<<" = "<<sum<<endl;
                cout<<"and "<<n<<"*("<<n<<"+1)/2="<<n*(n+1)/2<<endl;
                break;
            }
            case '2':{
                //Declare all Initialize Variables
                int nLoop=10000000;
                float sum=0.0f,frac=0.1f;

                //Input values
                for(int i=1;i<=nLoop;i++){
                    sum+=frac;
                }

                //Output Located
                cout<<"The computed sum of "
                        <<frac<<"->"<<nLoop<<" times = "<<sum<<endl;
                cout<<"Simple multiplication of "
                        <<frac<<"x"<<nLoop<<" = "<<frac*nLoop<<endl;
                cout<<"Error = "<<(frac*nLoop-sum)/(frac*nLoop)*100
                        <<"%"<<endl;
                break;
            }
            case '3':{
                cout<<"In Problem Solution 3"<<endl;
                break;
            }
            case '4':{
                cout<<"In Problem Solution 4"<<endl;
                break;
            }
            case '5':{
                cout<<"In Problem Solution 5"<<endl;
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
    
    //Exit Stage
    return 0;
}

