/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on July 14, 2022, 11:37 PM
 * Purpose:Write a program to Display the following pattern given an
 * input of 10.  Outputs an increase from 1 to 10 the decreases from 10 to 1.
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
    int s, //Size
        r, //Rows
        c; //Columns
    
    //Initialize Variables
    cin>>s;
    
    //Map inputs to outputs -> The Process
    for (r = 1; r <= s; r++)
    {
        for (int c=1; c <= r; c++)
        {
            cout << "+";
        }
        cout<<endl<<endl;
    }
    for (r=1; r<=s; r++)
    {
        for (int c=1; c<=s+1-r; c++)
        {
            cout<<'+';
        }
        if(r<s) cout<<endl<<endl;
    }
    
    //Display Results
    
    //Exit stage right
    return 0;
}