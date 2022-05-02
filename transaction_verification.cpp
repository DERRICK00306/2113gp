#include<iostream>
#include<string>
using namespace std;
#include"struct.h"

bool transaction_verification(Asset a[8], string action, string name, int amount, double cash)
{
  int current_price = 0;
  for (int i = 0; i < 8; i++)
  {
    if (a[i].asset_name == name)
    {
      current_price = a[i].current_price;
      break;
    } //consider if it is a wrong name
  }

  double total_expense = current_price * amount;

  if (action == "B")
  {
    while(true)
    {
      cout << "Are you sure to buy" << amount << " units of "
           << name << " at a price of $" << current_price << " per unit "
           << " with a total expense of $" << total_expense << "?\n"
           << "------------------------------" << endl
           << "Input ('Yes'/'No'):\n";


       if (reply == "Yes" || reply == "yes" || reply == "Y" || reply == "y")
       {
         cash -= total_expense;
         break;
       }
       else if (reply == "No" || reply == "no" || reply == "N" || reply == "n")
       {
         cout << "Transaction cancelled.\n";
         return false;
       }
       else
       {
         cout << "Invalid input. Please input 'Yes' or 'No'.\n";
       }
    }

    if (total_expense > cash)
    {
      cout << "No enough cash. Transaction failed." << endl;
      return false;
    }
  }


  else if (action == "S")
  {
    while(true)
    {
      cout << "Are you sure to sell" << amount << " units of "
           << name << " at a price of $" << current_price << " per unit "
           << " with a total gain of $" << total_expense << "?\n"
           << "------------------------------" << endl
           << "Input ('Yes'/'No'):\n";


       if (reply == "Yes" || reply == "yes" || reply == "Y" || reply == "y")
       {
         cash += total_expense;

         break;
       }
       else if (reply == "No" || reply == "no" || reply == "N" || reply == "n")
       {
         cout << "Transaction cancelled.\n";
         return false;
       }
       else
       {
         cout << "Invalid input. Please input 'Yes' or 'No'.\n";
       }
    }

    int current_vol = 0;
    for (int i = 0; i < 8; i++)
    {
      if (a[i].asset_name == name)
      {
        current_vol = a[i].holding_volume;
        break;
      } //consider if it is a wrong name
    }
    if (amount > current_vol)
    {
      cout << "Transaction volume exceeds current holding volume. Transaction failed." << endl;
      return false;
    }
  }
  else
  {
    cout << "Invalid instruction" << endl;
    return false;
  }
  return true;
}
