/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 23, 2022, 6:45 PM
 * Purpose: Display the follow information, each on a separate line.
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
    string name,
           address,
           phone,
           major;
    
    //Initialize Variables
    name="Harry Potter\n",      
    address="4 Private Drive\n",
    phone="(123)456-7890\n",
    major="Wizardry\n";
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout<<"My name is: "<<name
        <<"My address is: "<<address
        <<"My phone number is: "<<phone
        <<"My major is: "<<major
        <<endl; 
    
    //Exit stage right
    return 0;
}