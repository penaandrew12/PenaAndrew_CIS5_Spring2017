/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 05, 2017, 2:45 PM
 * Purpose: Winning Division Numbers
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions

//Function Prototypes
float findHighest(float,float,float,float);

//Program Execution Begins
int main(int argc, char** argv) {
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
        return(0);
    }
        
    cout<<"Enter Sales for South quarter = $";
    cin>>b;
    if(b<0){
        cout<<"Sales must be greater than 0.00 in Order to Compete"<<endl;
        return(0);
    }
    
    cout<<"Enter Sales for East quarter = $";
    cin>>c;
    if(c<0){
        cout<<"Sales must be greater than 0.00 in Order to Compete"<<endl;
        return(0);
    }
    
    cout<<"Enter Sales for West quarter = $";
    cin>>d;
    if(d<0){
        cout<<"Sales must be greater than 0.00 in Order to Compete"<<endl;
        return(0);
    }
    
    //Draw from Function
    cout<<"The greatest sales is $";
    high=findHighest(a,b,c,d);
    cout<<endl;
            
    
    //Exit Stage
    return 0;

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
