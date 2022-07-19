/* 
 * File:   main.cpp
 * Author: Ab C. Defg
 * Created on June 23, 2022, 2:11 PM
 * Purpose: Calculate the number of miles per gallon the car gets.
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
    int glns,//Gallons
        mil,//Miles
        milDrvn,//Miles Driven
        mpg;//Miles per gallon
    
    //Initialize Variables
    glns=15;
    mil=375;
    mpg=mil/glns;   
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout<<"MPG = "<<mpg<<endl;
    
    //Exit stage right
    return 0;
}