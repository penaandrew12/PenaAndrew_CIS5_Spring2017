 /* To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 28, 2017, 11:18 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
        //Declare all Variables Here
        int chce;

        //show menu and loop
        do{
                
        //in   
        //display menu
           cout<<"Type 0 to exit "<<endl;
           cout<<"Type 1 for sum 1 to n problem "<<endl;
           cout<<"type 2 for sum 0.1 error problem"<<endl;
           cout<<"type 3 for problem 3"<<endl;
           cout<<"type 3 for problem 3"<<endl;
           cout<<"type 3 for problem 3"<<endl;
           cout<<"type 3 for problem 3"<<endl;
           cout<<"type 3 for problem 3"<<endl;
           cout<<"type 3 for problem 3"<<endl;
           cout<<"type 3 for problem 3"<<endl;

           cin>>chce;

           switch(chce){
            case '1':{
            int nLoop=10000000;
            float sum=0, frac=0.1f;
            for(int i=1;i<=nLoop;i++){
            sum+=frac;

        cout<<"the computed sum of "
                <<frac<<"->"<<nLoop<<" times = "<<sum<<endl;
        cout<<"Simple multiplication of "
                <<frac<<" x "<<nLoop<<" = "<<frac*nLoop<<endl;
        cout<<"error ="<<(frac*nLoop-sum)/(frac*nLoop)*100
                <<"%"<<endl;
               }
               case '2':{
                   int n=100000,sum=0;

        for(int i=1;i<n;i++){
            sum+=i;
        }
        cout<<"the sum of 1 to "<<n<<" = "<<sum<<endl;
        cout<<" and "<<n<<"*("<<n<<"+1/2="<<n*(n+1)/2<<endl;
               }
               case '3':{
                   cout<<"in problem solution 3"<<endl;
                   break;
           }
               case '4':{
                   cout<<"in problem solution 4"<<endl;
                   break;
               }
               case '5':{
                   cout<<"in problem solution 5"<<endl;
                   break;
                   }
               case '6':{
                   cout<<"in problem solution 6"<<endl;
                   break;
               }
               case '7':{
                   cout<<"in problem solution 7"<<endl;
                   break;
               }
               case '8':{
                   cout<<"in problem solution 8"<<endl;
                   break;
               }
               case '9':{
                   cout<<"in problem solution 9"<<endl;
                   break;
                   default:{
                       cout<<"Exit the Program"<<endl;

                   }
               }
        }while(chce>='1'&&chce<='9');


        //Exit
    return 0;
	}
    
    return 0;
}

