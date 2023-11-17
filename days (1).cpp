/* Name: Nathan Lindblade
Date: February 3, 2023
About this project: Shows how many days are in a month
Assumptions: Assumes the user enters a valid year 

All work below was performed by Nathan Lindblade */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     //Declarations
     int month, year;
     
     //Prompt user 
     cout << "Enter a month (1-12): ";
     cin >> month;
     cout << "Enter a year: ";
     cin >> year;
     
     //Months with 31 days
     if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || 
        month == 10 || month == 12)
     {
         cout << endl << "Number of days: 31";
     }
     //Months with 30 days
     else if(month == 4 || month == 6 || month == 9 || month == 11)
     {
         cout << endl << "Number of days: 30";
     }
     //February
     else if (month == 2)
     {
         if(year % 100 == 0)
         {
             if (year % 400 == 0)
             {
                 cout << endl << "Number of days: 29";
             }
             else if(year % 400 != 0)
             {
                 cout << endl << "Number of days: 28";
             }
         }
         else if (year % 4 == 0)
         {
             cout << endl << "Number of days: 29";
         }
         else 
         {
             cout << endl << "Number of days: 28";
         }
     }
     //If month entered does not exist
     else
     {
         cout << endl << "Invalid month entered. Aborting program.";
     }
     
     
     return 0;
}




