/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on July 12, 2022, 2:54 PM
 * Purpose: Asks the user to enter the number of books that he or she has 
 * purchased this month and then displays the number of points awarded
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
    int bookamt; //Number of books
    
    //Initialize Variables
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bookamt;
    cout<<"Books purchased =  "<<bookamt<<endl;
    
    //Map inputs to outputs -> The Process
    if (bookamt == 0)
        cout<<"Points earned   = 0";//Converting amount of books to pts
    else if(bookamt == 1)
        cout<<"Points earned   = 5";               //1 Books = 5 pts
    else if(bookamt == 2)
        cout<<"Points earned   = 15";              //2 Books = 15 pts
    else if(bookamt == 3)
        cout<<"Points earned   = 30";              //3 Books = 30 pts
    else if(bookamt >= 4)
        cout<<"Points earned   = 60";              //4 Books = 60 pts
    else
        cout<<"That's an invalid number of books"; //If more than 4 books
    
    //Display Results
    
    //Exit stage right
    return 0;
}