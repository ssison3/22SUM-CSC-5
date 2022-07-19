/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 30, 2022, 10:15 PM
 * Purpose: Display the sine, cosine, and tangent of the angle.
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float pi=3.141592653589;  //PI

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float var,
          fulld, //Full Circle
          halfd, //Half of a Circle
          rad,   //Radian
          conv,  //Conversion
          sin1,  //Sine
          cos1,  //Cosine
          tan1;  //Tangent
    
    //Initialize Variables
    var=45;       //cin>>
    fulld=360;
    
    //Map inputs to outputs -> The Process
    halfd=fulld/2;
    rad=pi/halfd;
    conv=var*rad;
    sin1=sin(conv);
    cos1=cos(conv);
    tan1=tan(conv);
    
    //Display Results
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cout<<setprecision(0)<<fixed<<"sin("<<var<<") = "
        <<setprecision(4)<<fixed<<sin1<<endl;
    cout<<setprecision(0)<<fixed<<"cos("<<var<<") = "
        <<setprecision(4)<<fixed<<cos1<<endl;
    cout<<setprecision(0)<<fixed<<"tan("<<var<<") = "
        <<setprecision(4)<<fixed<<tan1;
    
    //Exit stage right
    return 0;
}