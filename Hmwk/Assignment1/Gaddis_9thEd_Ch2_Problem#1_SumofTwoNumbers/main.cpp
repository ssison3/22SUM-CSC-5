/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 29, 2022, 6:35 PM
 * Purpose: Store 50 & 100 in variables, store sum into a variable named total.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables 
    int num1,//Integer 1
        num2,//Integer 2
        total;//Sum of the 2 integers
    
    //Initialize Variables
    num1=50;
    num2=100;
    
    //Map inputs to outputs -> The Process
    total=num1+num2;//Sum of the variable numbers
          
    //Display Results
    cout<<"Total = "<<total<<endl;
    
    //Exit stage right
    return 0;
}