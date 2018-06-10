/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kevin
 *
 * Created on June 9, 2018, 10:43 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>    //For RNG

using namespace std;

/*
 * 
 */

//Prototypes
void prob1();
void prob2();

int main(int argc, char** argv) {
    //Seed for random number generator
    srand(time(NULL));
    
    char choice;
    
    do{
        cout<<endl;
        cout<<"CSC-5 Final Redux\n----------------\n\n";
        cout<<"Enter 1 for Problem 1\n";
        cout<<"Enter 2 for Problem 2\n";
        cout<<"Enter 3 for Problem 3\n";
        cout<<"Enter 4 for Problem 4\n";
        cout<<"Enter 5 for Problem 5\n";
        cout<<"Enter 6 for Problem 6\n";
        cout<<"Enter any other key to EXIT\n";
        cout<<"\nUser Input: ";
        cin>>choice;
    

    
        switch(choice){
            case '1': prob1();break;
            case '2': prob2();break;
            case '3': ;break;
            case '4': ;break;
            case '5': ;break;
            case '6': ;break;

            default: cout<<"\nOption Exit chosen. Terminating...\n";
        }
    }while(choice >= '1' && choice <= '6');
    return 0;
}

