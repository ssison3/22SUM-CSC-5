/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on July 14, 2022, 6:07 PM
 * Purpose: Write a program with a loop that lets the user enter a
 * series of integers.
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
    int max=0, num=0, min=10000000;
    
    //Initialize Variables
    
    //Map inputs to outputs -> The Process
    while (num != -99)
    {
        cin>>num;
        if(num==-99)break;
        if(num>max)
            max=num;
        if(num<min)
            min=num;
    }
    //Display Results
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;
    
    //Exit stage right
    return 0;
}