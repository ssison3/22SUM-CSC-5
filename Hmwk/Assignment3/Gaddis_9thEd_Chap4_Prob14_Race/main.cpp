/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on July 12, 2022, 6:41 PM
 * Purpose: Asks for the names of three runners and the time it took each
 * of them to finish a race.
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
    string name1, //Jack
           name2, //Jim
           name3; //John
    float time1, //Jack's Time
          time2, //Jim's Time
          time3; //John's Time
    
    //Initialize Variables
    cin>>name1>>time1>>name2>>time2>>name3>>time3;
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    if (time1<0 || time2<0 || time3<0)
        {
        cout<<"Invalid time, time must be a positive number.";
        }
    else if (time1<=time2 && time1<=time3)
        {
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        if (time2<=time3)
            {
            cout<<name2<<"\t"<<setw(3)<<time2;
            cout<<name3<<"\t"<<setw(3)<<time3<<endl;
            }
        else if (time3<time2)
            {
            cout<<name3<<"\t"<<setw(3)<<time3<<endl;
            cout<<name2<<"\t"<<setw(3)<<time2;
            }
        }
    else if (time2<=time1 && time2<=time3)
        {
        cout<<name2<<"\t"<<setw(3)<<time2;
        if (time1<=time3)
            {
            cout<<name1<<"\t"<<setw(3)<<time1<<endl;
            cout<<name3<<"\t"<<setw(3)<<time3<<endl;
            }
        else if (time3<time1)
            {
            cout<<name3<<"\t"<<setw(3)<<time3<<endl;
            cout<<name1<<"\t"<<setw(3)<<time1<<endl;
            } 
        }
    else if (time3<=time1 && time3<=time2)
        {
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        if (time1<=time2)
            {
            cout<<name1<<"\t"<<setw(3)<<time1<<endl;
            cout<<name2<<"\t"<<setw(3)<<time2;
            }
        }
    
    //Exit stage right
    return 0;
}