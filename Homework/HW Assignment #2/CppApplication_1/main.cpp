/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

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
#include <random> 
#include <string>

using namespace std;

int main(int argc, char** argv) {

    int choice;
    default_random_engine randGen(time(0)); //different number every second
    uniform_int_distribution<int> diceRoll(1, 6);// dice roll 1-6
    int shoot=1;                //the move to shoot
    int block=2;                //the move to block
    int reload=3;               //the move to reload
    int shotTkn=1;              //shot taken
    int yourMve;                //the action you choose
    //description 
    cout<<"Gunslinger "<<endl;
    cout<<"kill your opponent before he kills you! "<<endl;
    cout<<"you have 3 Life Points"<<endl;
    cout<<"you can make three moves shoot, block, or reload "<<endl;
    cout<<"type 1 to begin!"<<endl;
    cout<<"if you wish to exit type 0 "<<endl;
    
    //option to play 
    cin>>choice;
    cout<<endl<<endl;
    
    if(!(choice=='1')){
        cout<<"exit Gunslinger"<<endl;
        exit(0);}
    
    //map inputs to outputs or process the data
    cout<<"as you stand there scanning your opponent"<<endl;
    cout<<"you make the first move!"<<endl;
    cout<<"by typing 1 you can shoot!"<<endl;
    cout<<"by typing 2 you can block!"<<endl;
    cout<<"by typing 3 you can reload!"<<endl;
    cout<<"you are only aloud to block every 2 turns, "
                    "and must reload every shot"<<endl;
    cin>>yourMve;
            if (yourMve=1){
                cout<<"you quickdraw your pistol and fire! "<<endl;
                cout<<"you roll a "diceRoll(randGen)<<endl;
                if (diceRoll==6){
                    cout<<"you have CRITICALLY hit him for 2!"<<endl;
                }
                else if (diceRoll<3 || diceRoll<6){
                    cout<<"you have hit your opponent for 1!"<<endl;
                }
                else if (diceRoll<2){
                    cout<<"your opponent laughs at your horrible shot"<<endl;
                }
            
            }
        
    
    return 0;
}

