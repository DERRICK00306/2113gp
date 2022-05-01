#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

#include"purchase_and_sell.h"
#include"transaction_verification.h"
#include"offer_bid.h"


void offer_bid(Asset a[8], double cash, int round, Transaction * &t, int &number_t, int &t_size)
{
  cout << "Sir Derrick: I have prepared a nice deal for you. Check this..." << endl;

  srand(time(NULL));

  int asset_index = rand()%8;
  int total_volume_index = rand()%5;
  double discount_factor = (rand()%10+90)/100;

  int possible_total_volume[5] = {150000, 200000, 2500000, 300000, 400000};
  double generate_volume = possible_total_volume[total_volume_index];

  int real_volume = (int) generate_volume;
  double discount_price = discount_factor * a[asset_index].current_price;
  double total_expense = discount_price * real_volume;

  cout << "Deal: A total of " << real_volume << " units of "
       << a[asset_index].asset_name << " at a price of $" << discount_price << " per unit "
       << " with a total expense of $" << total_expense << ".\n"
       << "------------------------------" << endl
       << "Sir Derrick: That's a real discount! Are you taking this great opportunity? ('Yes'/'No')\n";

  string reply;
  cin >> reply;
  if (reply == "Yes" || reply == "yes" || reply == "Y" || reply == "y")
  {
    if (transaction_verification(a, "B", a[asset_index].asset_name, real_volume, cash))
    {
      purchase_or_sell(a, "B", a[asset_index].asset_name, real_volume, round, t, number_t, t_size );
    }
    cout << "------------------------------" << endl;
    cout << "Transaction has been successful.\n"
    << "Sir Derrick: See you next round!\n";

  }
  else if (reply == "No" || reply == "no" || reply == "N" || reply == "n")
  {
    cout << "Sir Derrick: Nevermind. See you next round!\n";
  }
  else
  {
    cout << "Invalid input. Please input 'Yes' or 'No'.\n";
  }

}
