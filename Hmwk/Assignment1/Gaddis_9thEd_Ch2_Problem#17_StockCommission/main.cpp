/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 29, 2022, 6:48 PM
 * Purpose: Calculate and display the amount paid for stocks alone, the amount
 * of the commission, and the total amount paid for stock plus the commission.
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
    float stkprc,//Stock price
          cmsn,//Commission
          stk,//Stock
          totstk,//Total Stock shares
          totcmsn,//Need to get 2% commission of total stock shares
          totcmsnstk;//Total stocks + total commission
    
    //Initialize Variables
    stkprc=35.00;//Shares of stock at the price of
    stk=750;//Amount of shares of stock
    cmsn=0.02;//Amount for commission
    
    //Map inputs to outputs -> The Process
    totstk=stk*stkprc;
    totcmsn=totstk*cmsn;
    totcmsnstk=totstk+totcmsn;
    
    //Display Results
    cout<<"Stock total\t= $"<<totstk<<endl;//Amount paid for stock alone
    cout<<"Commission\t= $"<<totcmsn<<endl;//Amount for commission
    cout<<"Total amount\t= $"<<totcmsnstk<<endl;//Total of stocks & commissions
    
    //Exit stage right
    return 0;
}