/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 16, 2016, 9:07 AM
 * Purpose: Sorting
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int a,
        b,
        c;
    
    //Input or initialize values Here
    cout<<"Input A = ";
    cin>>a;
    cout<<"Input B = ";
    cin>>b;
    cout<<"Input C = ";
    cin>>c;
    
    //Process/Calculations Here
    if(a<b&&b<c&&a<c){
    cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else if(a<c&&c<b&&a<b){
        cout<<a<<" "<<c<<" "<<b<<endl;
    }    
        if(b<c&&a<c&&b<a){
        cout<<b<<" "<<a<<" "<<c<<endl;
        }
        else if(b<a&&c<a&&b<c){
            cout<<b<<" "<<c<<" "<<a<<endl;
        }
            if(c<a&&a<b&&c<b){
            cout<<c<<" "<<a<<" "<<b<<endl;
            }
            else if (c<b&&b<a&&c<a){
                cout<<c<<" "<<b<<" "<<a<<endl;
            }
    
    //Output Located Here

    //Exit
    return 0;
}

