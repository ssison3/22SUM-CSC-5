/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on July 12, 2022, 10:03 PM
 * Purpose: Write a program that accepts a year written as a four-digit
 * Arabic (ordinary) numeral and outputs the year written in Roman numerals.
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int n1s,
        n10s,
        n100s,
        n1000s,
        arabic;
    
    //Initialize Variables
    cin>>arabic;
    n1s=arabic%10;
    n10s=arabic%100/10;
    n1000s=arabic/1000;
    n100s=(arabic-n1000s*1000)/100;
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    if((arabic>=1000)&&(arabic<=3000))
        {
        cout<<arabic<<" is equal to ";
        }
    else
        {
        cout<<arabic<<" is Out of Range!";
        return 0;
        }
    switch(n1000s)
        {
        case 3:cout<<"M";
        case 2:cout<<"M";
        case 1:cout<<"M";
        }
    switch(n100s)
        {
        case 9:cout<<"CM";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 5:cout<<"D";break;
        case 4:cout<<"CD";break;
        case 3:cout<<"C";
        case 2:cout<<"C";
        case 1:cout<<"C";
        }
    switch(n10s)
        {
        case 9:cout<<"XC";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 5:cout<<"L";break;
        case 4:cout<<"XL";break;
        case 3:cout<<"X";
        case 2:cout<<"X";
        case 1:cout<<"X";
        }
    switch(n1s)
        {
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"I";
        case 2:cout<<"I";
        case 1:cout<<"I";
        }
    
    //Exit stage right
    return 0;
}