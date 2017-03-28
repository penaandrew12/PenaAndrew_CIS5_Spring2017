/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 28, 2017, 10:41 AM
 * Purpose: Sum Dice
 */

//System Libraries Here
#include <iostream>     //Library
#include <ctime>        //Time to set the seed
#include <cstdlib>      //Srand and rand function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int nThrws=36000;
    int f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,
            f8=0,f9=0,f10=0,f11=0,f12=0; //How many times did we throw the value
    
    //Loop and throw the dice
    for(int thrw=1;thrw<=nThrws;thrw++){
        char die1=rand()%6+1;// [1,6]
        char die2=rand()%6+1;// [1,6]
        char sum=die1+die2;
        switch(sum){
            case 2:f2++;break;
            case 3:f3++;break;
            case 4:f4++;break;
            case 5:f5++;break;
            case 6:f6++;break;
            case 7:f7++;break;
            case 8:f8++;break;
            case 9:f9++;break;
            case 10:f10++;break;
            case 11:f11++;break;
            case 12:f12++;break;
            default: cout<<"Bad Throw"<<endl;                                                          
        }
    }
    
    //Output Located Here
    cout<<"2 was thrown "<<f2<<"out of "<<nThrws<<" times"<<endl;
    cout<<"3 was thrown "<<f3<<"out of "<<nThrws<<" times"<<endl;
    cout<<"4 was thrown "<<f4<<"out of "<<nThrws<<" times"<<endl;
    cout<<"5 was thrown "<<f5<<"out of "<<nThrws<<" times"<<endl;
    cout<<"6 was thrown "<<f6<<"out of "<<nThrws<<" times"<<endl;
    cout<<"7 was thrown "<<f7<<"out of "<<nThrws<<" times"<<endl;
    cout<<"8 was thrown "<<f8<<"out of "<<nThrws<<" times"<<endl;
    cout<<"9 was thrown "<<f9<<"out of "<<nThrws<<" times"<<endl;
    cout<<"10 was thrown "<<f10<<"out of "<<nThrws<<" times"<<endl;
    cout<<"11 was thrown "<<f11<<"out of "<<nThrws<<" times"<<endl;
    cout<<"12 was thrown "<<f12<<"out of "<<nThrws<<" times"<<endl;
    
    //Exit
    return 0;
}

