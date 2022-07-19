/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 239, 2022, 6:42 PM
 * Purpose: Calculate the number of acres in a tract of land.
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
    int acre1,
        acre2;
    float totacre;
    
    //Initialize Variables
    acre1=43,560;
    acre2=391,876;
    
    //Map inputs to outputs -> The Process
    totacre=acre2/acre1;
    
    //Display Results
    cout<<"Total acre: "<<totacre<<endl;
    
    //Exit stage right
    return 0;
}