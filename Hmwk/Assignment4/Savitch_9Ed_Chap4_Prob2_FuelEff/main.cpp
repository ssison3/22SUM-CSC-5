/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on July 14, 2022, 12:49 PM
 * Purpose: Input data for two cars and output the number of miles per
 * gallon delivered by each car.
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
float const liter = 0.264179;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float liter1,
          gallon1,
          distance1,
          mpg1,
          liter2,
          gallon2,
          distance2,
          mpg2;
    string choice,
            ch1,
            ch2;
    
    //Initialize Variables
    ch1="y";
    ch2="n";
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    do
    {
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>distance1;
        gallon1=liter1*liter; //Conversion of liters to gallons
        mpg1=distance1/gallon1; //mpg on gallons consumed and distance traveled
        cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg1<<"\n"<<endl;
        
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>distance2;
        gallon2=liter2*liter; //Conversion of liters to gallons
        mpg2=distance2/gallon2; //mpg on gallons consumed and distance traveled
        cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg2<<"\n"<<endl;
        
        if (mpg1>mpg2)
            cout<<"Car 1 is more fuel efficient\n"<<endl;
        else
            cout<<"Car 2 is more fuel efficient\n"<<endl;
              
        cout<<"Again:\n"<<endl;
        cin>>choice;
        while (choice==ch1)
        {
            
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>distance1;
        gallon1=liter1*liter; //Conversion of liters to gallons
        mpg1=distance1/gallon1; //mpg on gallons consumed and distance traveled
        cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg1<<"\n"<<endl;
        
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>distance2;
        gallon2=liter2*liter; //Conversion of liters to gallons
        mpg2=distance2/gallon2; //mpg on gallons consumed and distance traveled
        cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg2<<"\n"<<endl;
        
        if (mpg1>mpg2)
            cout<<"Car 1 is more fuel efficient\n"<<endl;
        else
            cout<<"Car 2 is more fuel efficient\n"<<endl;
              
        cout<<"Again:"<<endl;
        cin>>choice;
    if (choice==ch2)break;
        }   
    }
    while (choice==ch1);
    
    //Exit stage right
    return 0;
}