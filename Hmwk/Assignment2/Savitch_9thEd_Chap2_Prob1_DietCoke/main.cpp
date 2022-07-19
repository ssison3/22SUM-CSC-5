/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 30, 2022, 10:15 PM
 * Purpose:Input the users weight, Output the number of cans of 
 * soda the user can consume before he/she hits the expiration quantity.
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float swtp = 0.001f;  //1/10 of 1% Artificial Sweetener

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float d,     //dieter
          ldm,   //Lethal dose to kill mouse
          ldh,   //Lethal dose to kill human
          massm, //Mass of mouse
          massh, //Mass of dieter  
          spop,  //Mass of 1 soda pop
          lbstog, //lbs to Grams dieter weighs
          ldpm,
          ldph,
          swtppop;
   unsigned short numspop;
    
    //Initialize Variables
    d=200;       //dieter
    ldm=5;       //Grams needed to kill a mouse
    ldh=453.592; //100 lbs converted to Grams needed to kill a human
    massm=35;    //Mass of Mouse in grams
    massh=100;   //Mass of human in pounds
    spop=350;    //Mass of soda pop in grams
    
    //Map inputs to outputs -> The Process
    lbstog=d*ldh;        //Convert lbs to grams
    ldpm=ldm/massm;      //Lethal dose percent of sweetener to kill mouse
    swtppop=spop*swtp;   //How much sweetener in soda in Grams
    ldph=lbstog*ldpm;    //Lethal dose percent of sweetener to kill dieter
    numspop=ldph/swtppop; //Lethal dose percent in soda pop for dieter
    
    //Display Results
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<fixed<<setprecision(1)<<numspop<<" cans";
    
    //Exit stage right
    return 0;
}