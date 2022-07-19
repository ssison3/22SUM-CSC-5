/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8th, 2021, 10:41 AM
 * Purpose:  Basic Menu for Homework and Exams
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
float const liter = 0.264179;

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0 - Gaddis_9thEd_Chap5_Prob1_Sum1"<<endl;
        cout<<"Problem 1 - Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl;
        cout<<"Problem 2 - Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
        cout<<"Problem 3 - Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl;
        cout<<"Problem 4 - Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
        cout<<"Problem 5 - Savitch_9thEd_Chap4_Prob1_MPG"<<endl;
        cout<<"Problem 6 - Savitch_9Ed_Chap4_Prob2_FuelEff"<<endl;
        cout<<"Problem 7 - Savitch_9Ed_Chap4_Prob4_Inflation"<<endl;
        cout<<"Problem 8 - Savitch_9Ed_Chap4_Prob5_EstCost"<<endl;
        cout<<"Problem 9 - Savitch_9Ed_Chap4_Prob9_2or3Max"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:{
    //Declare Variables
    int val,
        num,
        sum;
    
    //Initialize Variables
    sum=0;
    
    //Map inputs to outputs -> The Process
    do
    {
        cin>>val;
    }
    while (val<0);
    for(num=1;num<=val;num++)
    {
       sum+=num; 
    }
    
    //Display Results
    cout<<"Sum = "<<sum;
break;
}
cout<<"Place Problem 0 here"<<endl;break;
            case 1:{
                //Declare Variables
    double p, //Number of pennies //TestCase 3
           t; //Sum
    int d,    //Number of days
        n;    //Number
    
    //Initialize Variables
    cin>>d;
    p=0.01;
    n=1;
    t=0;
    
    //Map inputs to outputs -> The Process
    while (d<1)
    {
        cout<<"Number of days worked must be at least 1";
    }
    while (n<=d)
    {
        t=t+p;
        p*=2;
        n++;
    }
    
    //Display Results
    cout<<"Pay = $"<<fixed<<setprecision(2)<<t;
break;
}
cout<<"Place Problem 1 here"<<endl;break;
            case 2:{
                 //Declare Variables
    int max=0, num=0, min=10000000;
    
    //Initialize Variables
    
    //Map inputs to outputs -> The Process
    while (num != -99)
    {
        cin>>num;
        if(num==-99)break;
        if(num>max)
            max=num;
        if(num<min)
            min=num;
    }
    //Display Results
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;
break;
}
cout<<"Place Problem 2 here"<<endl;break;
            case 3:{
                //Declare Variables
	int num1,   //Input numbers
      	    num2,   //Rows
	    num3;   //Columns
	char chars; //Letters
    
    //Initialize Variables
    cin>>num1>>chars;
    
    //Map inputs to outputs -> The Process
    while (num1<1 || num1>15)  //Formula for rectangle
    {
        cout<<"Must enter a positive integer no greater than 15";
        cin>>num1>>chars;
    }
        for(num3=1; num3<num1; num3++)  //Columns
    {
        for(num2=1; num2<=num1; num2++) //Rows
        {
            cout<<chars;                //Letter
        }
        cout<<endl;                     //ending of row
    }
    for( ; num3==num1; num3++)
    {
        for (num2=1; num2<=num1; num2++)
        {
            cout<<chars;
        }
        
    }
break;
}
cout<<"Place Problem 3 here"<<endl;break;
            case 4:{
    //Declare Variables
    int s, //Size
        r, //Rows
        c; //Columns
    
    //Initialize Variables
    cin>>s;
    
    //Map inputs to outputs -> The Process
    for (r = 1; r <= s; r++)
    {
        for (int c=1; c <= r; c++)
        {
            cout << "+";
        }
        cout<<endl<<endl;
    }
    for (r=1; r<=s; r++)
    {
        for (int c=1; c<=s+1-r; c++)
        {
            cout<<'+';
        }
        if(r<s) cout<<endl<<endl;
    }
break;
}
cout<<"Place Problem 4 here"<<endl;break;
            case 5:cout<<"Place Problem 5 here"<<endl;break;
            case 6:{
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
break;
}
cout<<"Place Problem 6 here"<<endl;break;
            case 7:cout<<"Place Problem 7 here"<<endl;break;
            case 8:cout<<"Place Problem 8 here"<<endl;break;
            case 9:cout<<"Place Problem 9 here"<<endl;break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}