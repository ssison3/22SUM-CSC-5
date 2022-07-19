/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 30, 2022, 10:15 PM
 * Purpose: Calculate the average test score
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
   float a,
         b,
         c,
         d,
         e,
         avg;
    int sum;
    
    //Initialize Variables
    a=1;
    b=2;
    c=3;
    d=4;
    e=5;
    
    //Map inputs to outputs -> The Process
    sum=a+b+c+d+e;
    avg=sum/5.0;
    
    //Display Results
    cout<<"Input 5 numbers to average."<<endl;
    cout<<"The average = "<<fixed<<setprecision(1)<<avg;
    
    //Exit stage right
    return 0;
}