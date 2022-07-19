/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 30, 2022, 10:15 PM
 * Purpose: Enter the replacement cost of a building and then displays
 * the minimum amount of insurance he or she should buy for the property
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
    float rcost,       //Replacement Cost
          rcostperc,   //Replacement Cost percent
          minins;      //Minimum amount of insurance
    
    //Initialize Variables
    rcost=500000;
    rcostperc=.80;
    
    //Map inputs to outputs -> The Process
    minins=rcostperc*rcost;
    
    //Display Results
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cout<<"You need $"<<minins<<" of insurance.";
    
    //Exit stage right
    return 0;
}