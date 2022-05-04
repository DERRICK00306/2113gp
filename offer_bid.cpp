#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

//#include"purchase_and_sell.h"
//#include"transaction_verification.h"
#include"transaction.h"
#include"print_portfolio.h"
#include"offer_bid.h"
#include"struct.h"


void offer_bid(Asset a[8], double &cash, string round, Transaction * &t, int &number_t, int &t_size)
{
  cout << fixed << setprecision(1);
  cout << "Sir Derrick: I have prepared a nice deal for you. Check this..." << endl;

  srand(time(NULL));

  int asset_index = rand()%8;
  cout << "asset_index " << asset_index << "\n";

  int total_volume_index = rand()%5;
  double discount_factor = (rand()%10+90)/100.0;

  /*

  int possible_total_volume[5] = {150000, 200000, 2500000, 300000, 400000};
  double generate_volume = possible_total_volume[total_volume_index];

  int real_volume = (int) generate_volume;
  double discount_price = discount_factor * a[asset_index].current_price;

  cout << "current_price " << a[asset_index].current_price << "\n"
  << "discount_factor " << discount_factor << "\n"
  << "discount_price " << discount_price << "\n";

  double total_expense = discount_price * real_volume;
  */


  int possible_total_expense[5] = {400000, 500000, 550000, 600000, 650000};
  double generate_expense = possible_total_expense[total_volume_index];

  //int real_volume = (int) generate_volume;

  double discount_price = discount_factor * a[asset_index].current_price;

  int real_volume = (int) generate_expense/discount_price;
  /*
  cout << "current_price " << a[asset_index].current_price << "\n"
  << "discount_factor " << discount_factor << "\n"
  << "discount_price " << discount_price << "\n";
  */

  double total_expense = discount_price * real_volume;
/*
  while (true)
  {
    cout << "Deal: A total of " << real_volume << " units of "
         << a[asset_index].asset_name << " at a price of $" << discount_price << " per unit (while the market price is currently $"
         << a[asset_index].current_price << ")"
         << " with a total expense of $" << total_expense << ".\n"
         << "------------------------------------------------------------" << endl
         << "Sir Derrick: That's real discount! \n\n";


    if (transaction_verification(a, "B", a[asset_index].asset_name, real_volume, cash))
    {
      int old_volume = a[asset_index].holding_volume;
      a[asset_index].holding_volume += real_volume;
      a[asset_index].average_price = (old_volume * a[asset_index].average_price + amount * discount_price)/a[asset_index].holding_volume;

      add_transaction(t, discount_price, real_volume, round, a[asset_index].asset_name, "B", number_t, t_size);

      print_portfolio(a);

    }
      cout << "\n\n------------------------------------------------------------" << endl;
      cout << "Sir Derrick: See you next round!\n";
      break;
    }
    else
    {
      cout << "Sir Derrick: Never mind. See you next round!\n";
      break;
    }
  }

*/

  while (true)
  {
    cout << "Deal: A total of " << real_volume << " units of "
         << a[asset_index].asset_name << " at a price of $" << discount_price << " per unit (while the market price is currently $"
         << a[asset_index].current_price << ")"
         << " with a total expense of $" << total_expense << ".\n"
         << "------------------------------" << endl
         << "Sir Derrick: That's real discount! Are you taking this great opportunity? ('Yes'/'No')\n";

    string reply;
    cin >> reply;
    cout << "\n\n";
    if (reply == "Yes" || reply == "yes" || reply == "Y" || reply == "y")
    {

      if (total_expense > cash)
      {
        cout << "No enough cash. Transaction failed." << endl;
        return;
      }

      int old_volume = a[asset_index].holding_volume;
      a[asset_index].holding_volume += real_volume;
      a[asset_index].average_price = (old_volume * a[asset_index].average_price + real_volume * discount_price)/a[asset_index].holding_volume;

      add_transaction(t, discount_price, real_volume, round, a[asset_index].asset_name, "B", number_t, t_size);

      cash -= total_expense;

      print_portfolio(a);

      cout << "\n\n------------------------------------------------------------" << endl;
      cout << "Sir Derrick: See you next round!\n";
      break;
    }
    else if (reply == "No" || reply == "no" || reply == "N" || reply == "n")
    {
      cout << "Sir Derrick: Nevermind. See you next round!\n";
      break;
    }
    else
    {
      cout << "Invalid input. Please input 'Yes' or 'No'.\n";
    }



  }



}
