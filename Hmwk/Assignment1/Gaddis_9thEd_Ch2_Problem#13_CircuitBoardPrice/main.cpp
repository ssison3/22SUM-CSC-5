/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 29, 2022, 6:44 PM
 * Purpose: Calculate the selling price of a circuit board.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    
    //Declare Variables
    float pcb,//Circuit board
          pft,//Profit
          ppcb,//Profit + Circuit board
          totprc;//Total price for Circuit
    
    //Initialize Variables
    pcb=14.95;
    pft=0.35;
    
    //Map inputs to outputs -> The Process
    ppcb=pft*pcb;
    totprc=ppcb+pcb;
    
    //Display Results
    cout<<"Total price with profit: $"<<setprecision(4)<<totprc<<endl;
    
    //Exit stage right
    return 0;
}