/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 30, 2022, 10:15 PM
 * Purpose: Ask the user how many cookies he or she actually ate
 * and then reports how many total calories were consumed.
 */

//System Libraries
#include <iostream> //Input/Output Library
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
    float c,
          totservate,
          calpserv,
          totcal;
    
    //Initialize Variables
    c=4;
    calpserv=300;
    
    //Map inputs to outputs -> The Process
    totservate=c/4;
    totcal=totservate*calpserv;
    
    //Display Results
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cout<<"You consumed "<<totcal<<" calories.";
    
    //Exit stage right
    return 0;
}