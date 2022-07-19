/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 29, 2022, 7:07 PM
 * Purpose: Write a program that holds the prices of the 5 items in
 * 5 variables. Display each item's price, the subtotal of the sale, the
 * amount of sales tax, and the total.
 */

//System Libraries
#include <iostream>
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
    float item1,
          item2,
          item3,
          item4,  
          item5,
          tax,
          subtot,//Subtotal of 5 items
          totsaltax,//Total sale tax
          grtot;//Grand Total
    
    //Initialize Variables
    item1=15.95;
    item2=24.95;
    item3=6.95;        
    item4=12.95;        
    item5=3.95;        
    tax=0.07;   
    subtot=item1+item2+item3+item4+item5;
    totsaltax=subtot*tax;
    grtot=subtot+totsaltax;
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout<<"Item 1\t\t= $"<<item1<<endl;
    cout<<"Item 2\t\t= $"<<item2<<endl;
    cout<<"Item 3\t\t= $"<<item3<<endl;      
    cout<<"Item 4\t\t= $"<<item4<<endl;
    cout<<"Item 5\t\t= $"<<item5<<endl;      
    cout<<"Subtotal\t= $"<<setprecision(4)<<subtot<<endl;       
    cout<<"Sales Tax\t= $"<<setprecision(3)<<totsaltax<<endl;        
    cout<<"Grand Total\t= $"<<setprecision(4)<<grtot<<endl; 
            
    //Exit stage right
    return 0;
}