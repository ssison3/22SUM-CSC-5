/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on July 8, 2022, 6:46 PM
 * Purpose: Calculate the percentage Gas Tax on a gallon of gas, and the
 * profit made from a gallon of gas given
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
    float etg,         //Cents for excise tax/gallon
          pstax,       //Percent sales tax
          fee,         //Cents for cap and trade "fee"-tax on a tax/gallon
          fetg,        //Cents for Federal excise tax/gallon
          oilp,        //Oil company profit
          tottax,      //Total tax
          subtax,      //Sub taxes
          gtax,        //Gas Tax
          pg,          //Converting decimal to percent gas tax
          gpft,        //Gas profit
          cstpg;
            
    
    //Initialize Variables
    cin>>cstpg;
    etg=0.39;
    pstax=0.08;
    fee=0.10;
    fetg=.184;
    
    //Map inputs to outputs -> The Process
    tottax=(cstpg*pstax)+etg+fee+fetg; //pemdas, Finding total tax
    subtax=cstpg-tottax;
    gtax=tottax/cstpg;
    pg=gtax*100;
    gpft=subtax*0.065;
    
    //Display Results
    cout<<
        "The amount it cost per gallon the last time gas was put in the car: $"
        <<cstpg<<endl;
    cout<<fixed<<setprecision(2)<<"Percentage Gas Tax on a gallon of gas"
        <<pg<<endl;
    cout<<"Taxes to the Government = $"<<gpft<<endl;
    
    //Exit stage right
    return 0;
}