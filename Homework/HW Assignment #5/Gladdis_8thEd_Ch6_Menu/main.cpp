/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 05, 2017, 6:30 PM
 * Purpose: Chapter 6 Gaddis HW Problem Menu
 */

//System Libraries 
#include <iostream>
#include <cmath>    //Math Library
#include <iomanip> //Format Library
#include <ctime>  //Time Library
#include <cstdlib> //RNG
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions
const float PERCENT=100.0f; //Conversion to Percent

//Function Prototypes
void menu(void);
void prob1(void);
void prob2(void);
void prob3(void);
void prob4(void);
void prob5(void);
void prob6(void);
void prob7(void);
void prob8(void);
void prob9(void);
void prob0(void);
float NewCost(float, float);
float findHighest(float,float,float,float);
float Distance(float,float);
float KinEngy(float,float);
float Temp(float);
float Toss(int);
float PrsntVal(float,float,float);
float FutureVal(float,float,float);
float Poplutn(int,float,float,int);
int Prime(int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Show menu and loop
    do{
        //Display Menu
        menu();
       
        //Input the choice
        cout<<"Problem ";
        cin>>choice;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case '1': prob1();break;
            case '2': prob2();break;
            case '3': prob3();break;
            case '4': prob4();break;
            case '5': prob5();break;
            case '6': prob6();break;
            case '7': prob7();break;
            case '8': prob8();break;
            case '9': prob9();break;
            case '0': prob0();break;
            default:{
                cout<<"Exit the program"<<endl;
            }
        }
    }while(choice>='0'&&choice<='9');
    
    //Exit stage right!
    return 0;
}

void prob0(void){
//Declare all Variables
    int num=0, //Number
        p=0; //Value for Prime or not Prime
    
    cout<<"This program shows if a number is prime or not."<<endl;
    cout<<"If the number is not greater than 0 or a real integer, an error will output."<<endl;
    cout<<"Enter an Integer"<<endl;      
    cin>>num;
    
    //If Number is Invalid Error 
    if (num<=0){
        cout<<"Error"<<endl;
    }
    
    p=Prime(num);
}
int Prime(int n){
    bool isPrime = true;
    for(int i=2;i<=n/2;++i){
      if(n%i==0){
          isPrime = false;
          break;
      }
    }
    if (isPrime)
      cout << "This is a prime number";
    else
      cout << "This is not a prime number";
    
    return n;
}

    
void prob9(void){
//Declare all Variables
    int Start=0, //starting Population
        Yrs=0, //Number of years
        N=0; //New Population Size
    float Brth=0, //Birth Rate
          Death=0; //Death Rate
          
    cout<<"Enter Starting size of Population"<<endl;      
    cin>>Start;
    if (Start<2){
        cout<<"Error! Starting Size must not be less than two."<<endl;
    }
    
    cout<<"Enter Birth Rate Percent"<<endl;      
    cin>>Brth;
    if (Brth<0){
        cout<<"Error! Birth Rate must not be less than 0."<<endl;
    }
    
    cout<<"Enter Death Rate Percent"<<endl;      
    cin>>Death;
    if (Death<0){
        cout<<"Error! Death Rate must not be less than 0."<<endl;
    }
    
    cout<<"Enter the number of Years"<<endl;      
    cin>>Yrs;
    if (Yrs<1){
        cout<<"Error! Year must not be less than 1."<<endl;
    }
    
    Brth=Brth/PERCENT;
    Death=Death/PERCENT;
    
    cout<<"Year           Population"<<endl;
    cout<<"-------------------------"<<endl;
    //Draw from Function
    Poplutn(Start,Brth,Death,Yrs);
}
float Poplutn(int a,float b,float c,int d){
    for (int count=1;count<=d;count++){
    a=a+(a*b)-(a*c);
    cout<<setw(2)<<count<<setw(20)<<a<<endl;
    }
    return a;
}


void prob8(void){
//Declare all Variables
    float fv=0, //Future Value
          ir=0, //Interest Rate
          mnths=0, //Year
          pv=0; //Present Value
          
    cout<<"Enter Present Value in $/s"<<endl;      
    cin>>pv;
    cout<<"Enter Interest Rate"<<endl;      
    cin>>ir;
    cout<<"Enter the number of months"<<endl;      
    cin>>mnths;
    
    cout<<fixed<<setprecision(2)<<endl;
    ir=ir/PERCENT;
    
    //Draw from Function
    fv=FutureVal(pv,ir,mnths);
    cout<<"The Future Value of "<<pv<<" at "<<ir*PERCENT<<"%, in "<<mnths<<" months is $"<<fv<<endl;
}
float FutureVal(float a,float b,float c){
    float d;
    d=a*(pow((1+b),c));
    return d;
}
   

void prob7(void){
//Declare all Variables
    float fv=0, //Future Value
          ir=0, //Interest Rate
          yr=0, //Year
          pv=0; //Present Value
          
    cout<<"Enter Future Value in $/s"<<endl;      
    cin>>fv;
    cout<<"Enter Interest Rate"<<endl;      
    cin>>ir;
    cout<<"Enter the number of years"<<endl;      
    cin>>yr;
    
    cout<<fixed<<setprecision(2)<<endl;
    ir=ir/PERCENT;
    
    //Draw from Function
    pv=PrsntVal(fv,ir,yr);
    cout<<"The Present Value needed, in order to live off interest, is $"<<pv<<endl;
}
float PrsntVal(float a,float b,float c){
    float d;
    d=a/(pow((1+b),c));
    return d;
}


void prob6(void){
//Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables
    float T=0,  //Turn Table
          Flip=0; //Turns for Flip
    
    cout<<"Enter the Amount of Times you Wish to Flip the Coin."<<endl;      
    cin>>Flip;
    
    cout<<"Turn       Toss"<<endl;
    cout<<"---------------"<<endl;
    //Draw from Function
    T=Toss(Flip);
}
float Toss(int t){
    int num;
    //Loop for Turns
    for(int count=1;count<=t;count++){
    int num; //Number
    int T; //Toss
    //RNG
    num=(rand()%2)+1; 
    
        if (num==1){
        cout<<setw(4)<<count<<setw(11)<<"Heads"<<endl;
        }
            else if (num==2){
            cout<<setw(4)<<count<<setw(11)<<"Tails"<<endl;
            }
    }
    return num;
}


void prob5(void){
    //Declare all Variables
    float F=0,  //Function Test
          Fahr=0; //Fahrenheit
          
    cout<<"Enter the Amount of Second The Object takes to fall."<<endl;      
    cin>>Fahr;
    
    //Draw from Function
    cout<<"Fahrenheit       Celsius"<<endl;
    cout<<"------------------------"<<endl;
    F=Temp(Fahr);
}
float Temp(float t){
    float C; //Celsius
    for(float F=0;F<=t;F++){
    C=(5*(F-32))/9;  //Celsius Conversion from Fahrenheit
    cout<<setw(5)<<F<<setw(19)<<C<<endl;
    }
    return C;
}


void prob4(void){
    //Declare all Variables
    float E=0,  //Energy
          m=0; //Mass in Kilograms
    float v=0; //Velocity of Object
          
    cout<<"Enter the Mass of the Object in Kilograms."<<endl;      
    cin>>m;
    cout<<"Enter the Velocity of the Object in m/s."<<endl;      
    cin>>v;
    
    //Draw from Function
    E=KinEngy(m,v);
    cout<<"The Moving Objects Kinetic Energy is "<<E<<endl;
}
float KinEngy(float a,float b){
    float c; //Kinetic Energy
    c=0.5f*a*pow(b,2);
    return c;
}


void prob3(void){
    //Declare all Variables
    float F=0,  //Falling Distance
          Time=0; //Time in Seconds
    float g=9.8f; //Gravity
          
    cout<<"Enter the Amount of Second The Object takes to fall."<<endl;      
    cin>>Time;
    
    //Draw from Function
    F=Distance(Time,g);
}
float Distance(float t,float b){
    float a; //Distance Traveled
    for(int sec=1;sec<=t;sec++){
    a=0.5f*b*pow(sec,2);
    cout<<sec<<" Second(s). Object has fallen "<<a<<" Meter(s)"<<endl;
    }
    return a;
}


void prob2(void){
    //Declare all Variables
    float a,  //Sales for Quarter North
          b,  //Sales for Quarter South
          c,  //Sales for Quarter East
          d;  //Sales for Quarter West
    float high;
    
    //Input or initialize values
    cout<<"Enter Sales for North quarter = $";
    cin>>a;
    if(a<0){
        cout<<"Sales must be greater than 0.00 in Order to Compete"<<endl;
    }
        
    cout<<"Enter Sales for South quarter = $";
    cin>>b;
    if(b<0){
        cout<<"Sales must be greater than 0.00 in Order to Compete"<<endl;
    }
    
    cout<<"Enter Sales for East quarter = $";
    cin>>c;
    if(c<0){
        cout<<"Sales must be greater than 0.00 in Order to Compete"<<endl;
    }
    
    cout<<"Enter Sales for West quarter = $";
    cin>>d;
    if(d<0){
        cout<<"Sales must be greater than 0.00 in Order to Compete"<<endl;
    }
    
    //Draw from Function
    cout<<"The greatest sales is $";
    high=findHighest(a,b,c,d);
    cout<<endl;
}
float findHighest(float a, float b, float c, float d){
    
    if(a>=b&&a>=c&&a>=d){ //If a is greatest number show
    cout<<a<<". North Division Had the Highest Quarter Sales.";
    }
    if(b>=a&&b>=c&&b>=d){ //If b is greatest number show
    cout<<b<<". South Division Had the Highest Quarter Sales.";
    }
    if(c>=a&&c>=b&&c>=d){ //If c is greatest number show
    cout<<c<<". East Division Had the Highest Quarter Sales.";
    }
    if(d>=a&&d>=b&&d>=c){ //If d is greatest number show
    cout<<d<<". West Division Had the Highest Quarter Sales.";
    }
}


void prob1(void){
    //Declare all Variables
    float total, //Total
          Perc, //Percent Markup
          HSale, //Whole Sale Price
          MarkUp; //Markup on Item
    
    //Input or initialize values
    cout<<"Whole Sale on Item = $";
    cin>>HSale;
    cout<<"Mark Up Percent = ";
    cin>>Perc;
    
    //Process/Calculations
    MarkUp=HSale*(Perc/PERCENT);
    
    //Pull from Function
    total=NewCost(HSale,MarkUp);
    
    //Output Located
    cout<<"Markup is = $"<<MarkUp<<endl;
    cout<<"New Price is = $"<<total<<endl;
}

float NewCost(float a, float b){
    float c;
    c=b+a;
    return c;
}


void menu(void){
    cout<<endl<<endl<<"Type anything else to exit"<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 3"<<endl;
    cout<<"Type 3 for Problem 5"<<endl;
    cout<<"Type 4 for Problem 6"<<endl;
    cout<<"Type 5 for Problem 7"<<endl;
    cout<<"Type 6 for Problem 8"<<endl;
    cout<<"Type 7 for Problem 9"<<endl;
    cout<<"Type 8 for Problem 10"<<endl;
    cout<<"Type 9 for Problem 16"<<endl;
    cout<<"Type 0 for Problem 22"<<endl<<endl;
}