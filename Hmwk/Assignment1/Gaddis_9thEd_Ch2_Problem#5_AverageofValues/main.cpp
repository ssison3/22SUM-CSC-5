/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 29, 2022, 6:58 AM
 * Purpose: Display the listed numbers in variables & divide the sum by 5 to
 * get the average.
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
    float num1,//Variable 1
          num2,//Variable 2
          num3,//Variable 3
          num4,//Variable 4
          num5,//Variable 5
          sum,//Variable 6
          average;//Variable 7
    short five;//Variable 8
    
    //Initialize Variables
    num1=28.0;
    num2=32.0;       
    num3=37.0;
    num4=24.0;        
    num5=33.0;        
    five=5.0;
    
    //Map inputs to outputs -> The Process
    sum=num1+num2+num3+num4+num5;//sum of the 5 other variables
    average=sum/five;//Result of dividing the sum by 5
    
    //Display Results
    cout<<"The average = "<<average<<endl;
    
    //Exit stage right
    return 0;
}