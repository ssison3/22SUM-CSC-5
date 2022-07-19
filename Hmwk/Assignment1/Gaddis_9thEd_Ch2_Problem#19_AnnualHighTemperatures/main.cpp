/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 29, 2022, 6:53 PM
 * Purpose: Calculate & report the new average July high temp for each city.
 */

//System Libraries
#include <iostream>
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
    float temp1,//New York City
          temp2,//Denver
          temp3,//Phoenix
          rise,//Rise in temperature
          temp1rise,//NYC+rising temp
          temp2rise,//Den+rising temp
          temp3rise;//Pho+rising temp
    
    //Initialize Variables
    temp1=85.00;//Temperature for NYC
    temp2=88.00;//Temperature for Den
    temp3=106.00;//Temperature for Pho
    rise=0.02;//Rise in temperature
    
    //Map inputs to outputs -> The Process
    temp1rise=temp1*rise+temp1;
    temp2rise=temp2*rise+temp2;
    temp3rise=temp3*rise+temp3;
    
    //Display Results
    cout<<"Average Temperature increase by 2% for listed cities:"<<endl;
    cout<<"New Work City: "<<setprecision(3)<<temp1rise<<" Fahrenheit"<<endl;
    cout<<"Denver: "<<setprecision(3)<<temp2rise<<" Fahrenheit"<<endl;
    cout<<"Phoenix: "<<setprecision(4)<<temp3rise<<" Fahrenheit"<<endl;
            
    //Exit stage right
    return 0;
}