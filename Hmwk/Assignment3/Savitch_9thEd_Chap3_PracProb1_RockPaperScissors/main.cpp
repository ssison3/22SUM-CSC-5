/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on July 12, 2022, 8:26 PM
 * Purpose:
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    char P1, //Player 1
         P2; //Player 2
    
    //Initialize Variables
    cin>>P1>>P2;
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    if (P1=='R'||P1=='r')
    {
        if(P2=='P'||P2=='p')
        {
            cout<<"Paper covers rock.";
        }
        else if (P2=='S'||P2=='s')
        {
            cout<<"Rock breaks scissors.";
        }
        else if(P1==P2)
        {
            cout<<"Nobody wins.";
        }
    }
    if(P1=='S'||P1=='s')
    {
        if(P2=='P'||P2=='p')
        {
            cout<<"Scissors cuts paper.";
        }
        else if (P2=='R'||P2=='r')
        {
            cout<<"Rock breaks scissors.";
        }
        else if(P1==P2)
        {
            cout<<"Nobody wins.";
        }
    }
    if (P1=='P'||P1=='p')
    {
        if(P2=='R'||P2=='r')
        {
            cout<<"Paper covers rock.";
        }
        else if (P2=='S'||P2=='s')
        {
            cout<<"Scissors cuts paper.";
        }
        else if(P1==P2)
        {
            cout<<"Nobody wins.";
        }
    }

    //Exit stage right
    return 0;
}