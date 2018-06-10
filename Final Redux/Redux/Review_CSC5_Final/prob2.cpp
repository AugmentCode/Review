//Purpose: Get 5 tries to get the right number
#include <iostream>

using namespace std;

void prob2(){
    cout<<"**************************************\n";
    cout<<"*    Problem 2 - Guess the Number    *\n";
    cout<<"**************************************\n\n";
    
    const int maxTurn = 5;
    int i = 0;
    int rndNum = rand()%100;
    
    int numInput;
    
    for(i = 0; i < maxTurn; i++){
        cout<<"\n\t\tTurn(s) Left: "<<(maxTurn - i)<<endl;
        cout<<"Enter your guessed Number: ";
        cin>>numInput;

        cout<<"\nGuess is ";
        if(numInput > rndNum)
            cout<<"too high.";
        else if(numInput < rndNum)
            cout<<"too low.";
        else{
            cout<<"RIGHT!";
            i = maxTurn + 1;
        }
        cout<<endl;
    } 
    
    if(i != maxTurn + 1)
        cout<<"\nYou Lose.\n";
    else
        cout<<"\nYou Win.\n";
}