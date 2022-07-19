/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on July 12, 2022, 1:46 PM
 * Purpose: Displays the names sorted in alphabetical order.
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
    string name1, //Andy
           name2, //Charly
           name3; //Leslie
    
    //Initialize Variables
    cin>>name1>>name2>>name3;
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    if (name1<name2 && name1<name3)
    {
    cout<<name1<<endl;
        if (name2<name3)
        {
        cout<<name2<<endl<<name3;
        }
        else
        {
        cout<<name3<<endl<<name2;
        }
    }
    else if(name2<name1 && name2<name3)
    {
    cout<<name2<<endl;
        if(name1<name3)
        {
        cout<<name1<<endl<<name3;
        }
        else
        {
        cout<<name3<<endl<<name1;
        }
    }
    else if(name3<name1 && name3<name2)
    {
    cout<<name3<<endl;
        if (name1<name2)
        {
        cout<<name1<<endl<<name2;    
        }    
        else
        {
        cout<<name2<<endl<<name1;    
        }
    }
     
    //Exit stage right
    return 0;
}