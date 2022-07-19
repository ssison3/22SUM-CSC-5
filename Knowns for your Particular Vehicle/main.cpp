/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 23, 2022, 2:22 PM
 * Purpose: Make a formula that gives the same inputs & outputs for the problem.
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
    float gasgage,     //Gas Gage % Full
          tank,        //Max Gallon capacity of tank
          mpg,         //Gas Mileage
          gasgage1,    //Converted 75% from size of Tank in Gallons
          gallreq1,    //Remaining Gallons to full up tank
          dis1,        //Distance to Gas Station 1
          distot1,     //Distance to and from Gas Station 1
          gasprc1,     //Price of gas per Gallon at Gas Station 1
          totgas1,     //Total Gallons use to drive to Gas Station 1
          totgasprc1,  //Total cost of gas driving to the Gas Station 1
          totgal1,     //Total Gallons of gas use to drive to the Gas Station 1
          tot1,        //Total cost of gallons of gas driving to Gas Station 1 
          prcprgl,     //Price per gallon when adding in mileage to station  
          dis2,  
          distot2,  
          totgas2,  
          totgasprc2,  
          totgal2,
          gasprc2,  
          tot2,  
          prcprg2;
            
    //Initialize Variables
    gasgage=.75;
    tank=22.0;
    mpg=17.0;
    dis1=10.0;
    gasprc1=4.25;
    dis2=20.0;
    gasprc2=4.09;
    
    //Map inputs to outputs -> The Process
    gasgage1=(gasgage*tank);
    
    gallreq1=tank-gasgage1;
    distot1=dis1*2;
    totgas1=distot1/mpg;
    totgasprc1=totgas1*gasprc1;
    totgal1=gallreq1+totgas1;
    tot1=totgal1*gasprc1;
    prcprgl=tot1/gallreq1;
    
    gallreq1=tank-gasgage1;
    distot2=dis2*2;
    totgas2=distot2/mpg;
    totgasprc2=totgas2*gasprc2;
    totgal2=gallreq1+totgas2;
    tot2=totgal2*gasprc2;
    prcprg2=tot2/gallreq1;
    
    //Display Results
    cout<<"Gas Station 1"<<endl;
    cout<<"Gas Gage % Full = "<<gasgage*100<<"%"<<endl;
    cout<<"Size of Tank in Gallons = "<<tank<<endl;
    cout<<"Gas Mileage mpg = "<<mpg<<endl;    
    cout<<"Gallon required to fill up = "<<gallreq1<<endl;
    cout<<"Regular Gas $/Gallon = "<<gasprc1<<"\n"<<endl;
    cout<<"Price per gallon with mileage at Gas Station 1 = "<<prcprgl<<"\n"<<endl;
    cout<<"gasgage1 = "<<gasgage1<<endl;
    cout<<"dis1 = "<<dis1<<endl;
    cout<<"distot1 = "<<distot1<<endl;
    cout<<"totgas1 = "<<totgas1<<endl;
    cout<<"totgasprc1 = "<<totgasprc1<<endl;
    cout<<"totgal1 = "<<totgal1<<endl;
    cout<<"tot1 = "<<tot1<<"\n"<<endl;
    cout<<"-----"<<"\n"<<endl;
    cout<<"Gas Station 2"<<endl;
    cout<<"Gas Gage % Full = "<<gasgage*100<<"%"<<endl;
    cout<<"Size of Tank in Gallons = "<<tank<<endl;
    cout<<"Gas Mileage mpg = "<<mpg<<endl;
    cout<<"Gallon required to fill up = "<<gallreq1<<endl;
    cout<<"Regular Gas $/Gallon = "<<gasprc2<<"\n"<<endl;
    cout<<"Price per gallon with mileage at Gas Station 1 = "<<prcprg2<<"\n"<<endl;
    cout<<"gasgage1 = "<<gasgage1<<endl;
    cout<<"dis2 = "<<dis2<<endl;
    cout<<"distot2 = "<<distot2<<endl;
    cout<<"totgas2 = "<<totgas2<<endl;
    cout<<"totgasprc2 = "<<totgasprc2<<endl;
    cout<<"totgal2 = "<<totgal2<<endl;
    cout<<"tot2 = "<<tot2<<endl;
    //Exit stage right
    return 0;
}