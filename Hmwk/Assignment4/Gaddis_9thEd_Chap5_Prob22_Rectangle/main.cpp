/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on July 14, 2022, 10:01 PM
 * Purpose: Display a rectangle on the screen using the character ‘X’
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
	int num1,   //Input numbers
      	    num2,   //Rows
	    num3;   //Columns
	char chars; //Letters
    
    //Initialize Variables
    cin>>num1>>chars;
    
    //Map inputs to outputs -> The Process
    while (num1<1 || num1>15)  //Formula for rectangle
    {
        cout<<"Must enter a positive integer no greater than 15";
        cin>>num1>>chars;
    }
        for(num3=1; num3<num1; num3++)  //Columns
    {
        for(num2=1; num2<=num1; num2++) //Rows
        {
            cout<<chars;                //Letter
        }
        cout<<endl;                     //ending of row
    }
    for( ; num3==num1; num3++)
    {
        for (num2=1; num2<=num1; num2++)
        {
            cout<<chars;
        }
        
    }
    
    //Display Results
    
    //Exit stage right
    return 0;
}