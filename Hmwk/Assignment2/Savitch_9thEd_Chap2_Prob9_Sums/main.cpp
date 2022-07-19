/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 30, 2022, 10:15 PM
 * Purpose: Determines whether a meeting room is in violation of fire 
 * law regulations regarding the maximum room capacity.
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int i,
        num,
        psum,
        nsum,
        tot;
    
    //Initialize Variables
    num=1;  //cin>>1, -1, 2, -2, 3, -3, 4, -4, 5, -5
    psum=0;
    nsum=0;
    
    //Map inputs to outputs -> The Process
    for (i=0; i<10; i++)
    {
    num;
    if(num>=0)
    {
    psum+=num;
    }
    else
    {
    nsum+=num;
    }
    }
    tot=psum+nsum;
    
    //Display Results
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cout<<fixed<<"Negative sum ="<<setw(4)<<nsum<<endl;
    cout<<"Positive sum ="<<setw(4)<<psum<<endl;
    cout<<"Total sum    ="<<setw(4)<<tot;
    
    //Exit stage right
    return 0;
}