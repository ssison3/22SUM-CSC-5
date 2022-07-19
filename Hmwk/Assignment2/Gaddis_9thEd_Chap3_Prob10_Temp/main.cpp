/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 30, 2022, 10:15 PM
 * Purpose:Converts Fahrenheit temperatures to Celsius temperatures. 
 * The formula is C = 5/9(F-32) F is the Fahrenheit temperature and C is 
 * the Celsius temperature.
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
    float a, //212.0
          b, //32
          c, //180
          d, //5
          e, //900
          f, //9
          g; //100
    
    //Initialize Variables
    a=212.0;
    b=32;
    d=5;
    f=9;
    
    //Map inputs to outputs -> The Process
    c=a-b;
    e=c*d;
    g=e/f;
    
    //Display Results
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cout<<fixed<<showpoint<<setprecision(1)
        <<a<<" Degrees Fahrenheit = "<<g<<" Degrees Centigrade";
    
    //Exit stage right
    return 0;
}