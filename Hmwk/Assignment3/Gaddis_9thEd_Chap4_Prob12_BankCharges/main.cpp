/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on July 12, 2022, 5:27 PM
 * Purpose: Asks for the beginning balance and the number of checks
 * written. Compute and display the bank’s service fees
 * for the month.
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
    float chk,  //Number of Checks
          bal,  //Balance
          chkf, //Check fee
          mthf, //Monthly charges/fees
          lowb, //Low Balance
          newb, //New Balance
          chrg; //Bank charge if account balance falls below $400
    
    //Initialize Variables
    mthf=10;
    cin>>bal>>chk; //Beginning balance:$100 ,# of checks:60
    
    //Map inputs to outputs -> The Process
    {
    if (chk<20)
        chkf=.10*chk;
    else if (chk>=20&&chk<40)
        chkf=.08*chk;
    else if (chk>=40&&chk<60)
        chkf=.06*chk;
    else chkf=.04*chk;
    }
    {
    if (bal<400)
        lowb=15;
    else lowb=0;
    }
    newb=bal-chkf-mthf-lowb;
    
    //Display Results
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cout<<"Balance     $"<<setw(9)<<fixed<<setprecision(2)<<bal<<endl;
    cout<<"Check Fee   $"<<setw(9)<<fixed<<setprecision(2)<<chkf<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<fixed<<setprecision(2)<<mthf<<endl;
    cout<<"Low Balance $"<<setw(9)<<fixed<<setprecision(2)<<lowb<<endl;
    cout<<"New Balance $"<<setw(9)<<fixed<<setprecision(2)<<newb;
    
    //Exit stage right
    return 0;
}