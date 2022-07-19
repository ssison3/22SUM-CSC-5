/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 30, 2022, 10:15 PM
 * Purpose: Determines whether a meeting room is in violation of fire 
 * law regulations regarding the maximum room capacity
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
    int maxcap,
        numppl;
    
    //Initialize Variables
    maxcap=300; //cin>>
    numppl=400; //cin>>
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    if (numppl>maxcap) {
    cout<<"Meeting cannot be held."<<endl;
    cout<<"Reduce number of people by "<< (numppl-maxcap)
        <<" to avoid fire violation.";
    }
    else if (numppl<=maxcap) {
    cout<<"Meeting can be held."<<endl;
    cout<<"Increase number of people by "<<(maxcap-numppl)
        <<" will be allowed without violation.";
    }
    
    //Exit stage right
    return 0;
}