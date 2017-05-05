/* 
 * File:   main.cpp
 * Author: Andrew
 *
 * Created on April 17, 2017, 12:39 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>  
#include <iomanip> 

using namespace std;

int main(int argc, char** argv) {
    int a, b, c, d;
    
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    if (b>a)  cout<<a<<endl;
    if (c>a) cout<<a<<endl;
    if (d>a) cout<<a<<endl;
    
    if (c>b) cout<<b<<endl;
    if (b>d) cout<<b<<endl;
        
    if (d>c) cout<<c<<endl;    
    
    return 0;
}

