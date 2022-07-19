/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on July 12, 2022, 11:02 PM
 * Purpose: Calculates a customer’s monthly bill. It should ask which
 * package the customer has purchased and how many hours were used.
 * It should then display the total amount due.
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string pkg; //Package
    float t;    //Time
    float p;    //Price
    
    //Initialize Variables
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pkg;
    
    //Map inputs to outputs -> The Process
    if((pkg=="A")||(pkg=="B")||(pkg=="C"))
    {
        cin>>t;
        if(t<=744)
        {
            if(pkg=="A")
            {
                if(t>10)
                {
                    p=9.95+(t-10)*2;
            }
            else
            {
                p=9.95;
            }
        }
        else if(pkg=="B")
        {
            if(t>20)
            {
                p=14.95+(t-20)*1;
            }
            else
            {
                p=14.95;
            }
        }
        else
        {
            p=19.95;
        }
    }
    else
    {
        cout<<"Invalid number of hours!";
    }
}
    else
    {
        cout<<"Invalid package!";
    }
    
    //Display Results
    cout<<"Bill = $ "<<p;
    
    //Exit stage right
    return 0;
}