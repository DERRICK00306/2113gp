#include<iostream>
#include<string>
#include<sstream>

#include"print_market.h"
#include"print_portfolio.h"
#include"print_news.h"
#include"update_price.h"
#include"transaction.h"
#include"purchase_and_sell.h"
#include"result.h"
#include"transaction_verification.h"
#include"offer_bid.h"
#include"pay_interest.h"
#include"borrow.h"
#include"struct.h"

using namespace std;

bool transaction_verification(Asset a[8], string action, string name, int amount, double cash);
//verify if a transaction is possible, i.e., purchase amount does not exceed total cash or sell amount does not exceed current holding volume
//input: asset information, buy or sell, asset name, trading amount, current Cash
//output: a bool value - whether the transaction is possible

void update_price(Asset a[8], double r_array[8]);
// update the prices of assets each turn
// input: asset information, an array of return rates
// the array of return rates will be updated in the function

void offer_bid(Asset a[8], double cash, string round, Transaction * &t, int &number_t, int &t_size);
// deal with Sir Derrick: randomly generate deals with discounts
// input: asset information, current cash, current round, transaction history, total number of transactions, size of the dynamic array of transaction history

void print_market(Asset a[8], double r[8]);
//print asset prices in the market
//input: price and return

void print_portfolio(Asset a[8]);
// print the player's portfolio
// input: asset information

void print_news();
// randomly select and print a piece of market news

void purchase_or_sell(Asset a[8], string action, string name, int amount, string time, Transaction * &t, int &number_t, int &t_size);
// implement a transaction, alter the player's cash and portfolio accordingly, and record it in the transaction history
// input: asset information, buy/sell, asset name, amount to trade, current round, transaction history, total number of transactions, size of the dynamic array of transaction history

void borrow_from_mom(int& borrow, double &cash);
// borrow money from mom with a upper bound of $1,000,000
// input: borrowing amount, current cash

void pay_interest(int borrow, double &cash);
// some family events generated at the end of each round. the amount the player has to pay depends on their borrowing amount.
// input: borrowing amount, current cash

void grow_transaction(Transaction* &t, int& t_size, int grow);
// increase the size of the dynamic array of historical transactions
// input: transaction history, size of the array, incremental size

void add_transaction(Transaction*& t, double price, int volume, string round, string name, string status, int &number_t, int &t_size);
// add a transaction to the transaction history
// input: transaction history, trading price, trading volume, current round, asset name, buy/sell, total number of transactions, size of the dynamic array of transaction history

void transaction_review(Transaction*& t, int number_t);
// review past transactions
// input: transaction history, total number of transactions

double result(Asset a[8]);
// return total value of the player's portfolio

void print_asset_list()
{
  cout << "Asset list" << endl
       << "****************"
       << "Stocks:\n"
       << "APPLE\n"
       << "TESLA\n"
       << "MICROSOFT\n"
       << "AMAZON\n"
       << "\n"
       << "Commodities:\n"
       << "OIL\n"
       << "GOLD\n"
       << "\n"
       << "Cryptos:\n"
       << "BITCOIN"
       << "Foreign currency:\n"
       << "CNY (Chinese Yuan)\n";
}

int main()
{
    //initialization

    Asset asset[asset_number];

    string asset_name_list[8] = {"APPLE", "TESLA", "MICROSOFT", "AMAZON", "OIL",
  "GOLD", "BITCOIN", "CNY"};

    double current_price_list[8] = {170, 1026, 297, 3090, 100, 1950, 42500, 6380};

    string category_list[8] = {"Stock", "Stock", "Stock", "Stock", "Commodity", "Commodity", "Cryptos", "Currency"};

    //initialize assets
    for (int i = 0; i < 8; i++)
    {
      asset[i].asset_name = asset_name_list[i];
      asset[i].current_price = current_price_list[i];
      asset[i].holding_volume = 0;
      asset[i].average_price = 0;
      asset[i].catogory = category_list[i];
    }
    /*

    asset[0] = {"APPLE",     170,  0, 0, "Stock"};
    asset[1] = {"TESLA",     1026, 0, 0, "Stock"};
    asset[2] = {"MICROSOFT", 297,  0, 0, "Stock"};
    asset[3] = {"AMAZON",    3090, 0, 0, "Stock"};
    asset[4] = {"OIL",       100,  0, 0, "Commodity"};
    asset[5] = {"GOLD",      1950, 0, 0, "Commodity"};
    asset[6] = {"BITCOIN",   42500,0, 0, "Cryptos"};
    asset[7] = {"CNY",       6380, 0, 0, "Currency"};
    */
    int t_size = 8; // initialize transaction capacity
    int number_t = 0; // total number of transactions
    Transaction * t = new Transaction[t_size];
    double cash = 1000000; //initial cash: $1,000,000
    int borrow = 0;


    cout << "Game rule" << endl;
    //copy readme.md

    cout << "List of command" << endl;
    //

    cout <<  "Start" << endl;

    int nRound = 1;

    while(nRound < 10)
    {
      stringstream ss;
      ss << nRound;
      string round = ss.str();
      cout << round << endl;

      cout << "--------" << round << "--------" << endl;

      double r_array[asset_number];

      update_price(asset, r_array);

      print_market(asset, r_array);
      //cout << "news" << endl;
      print_news();

      while(true)
      {
        int command = 0;


        cout << "List of command: " << endl;
        cout << "1: Purhcase asset" << endl
             << "2: Sell asset" << endl
             << "3: Borrow money from mom" << endl
             << "4: Deal with Sir Derick (Exclusive discount!)" << endl
             << "5: Check market" << endl
             << "6: Check my portfolio" << endl
             << "0: End this turn" << endl
             << "----------------" << endl
             << "Input command (e.g. 3):" << endl;


        cin >> command;

        if (command == 0)
        {
          cout << round << " ends.\n"
          << "----------------\n";
          break;
        }

        else if (command >= 1 && command <= 6)
        {
          switch(command)
          {
            case 1: case 2:
            {
              print_asset_list();
              cout << "Input asset name in all caps (e.g. APPLE): " << endl;

              string name;
              cin >> name;

              cout << "Input purchase volume in integer (e.g. 150): " << endl;
              int vol;
              cin >> vol;

              string buy_or_sell;
              if (command == 1)
                buy_or_sell = "B";
              else if (command == 2)
                buy_or_sell = "S";

              if (transaction_verification(asset, buy_or_sell, name, vol, cash))
              {
                purchase_or_sell(asset, buy_or_sell, name, vol, round, t, number_t, t_size); // decrease or increase cash
              }
              break;

            }
            case 3:
            {
              borrow_from_mom(borrow, cash);
              break;
            }
            case 4:
            {
              offer_bid(asset, cash, round, t, number_t, t_size);
              break;
            }
            case 5:
            {
              print_market(asset, r_array);
              break;
            }
            case 6:
            {
              print_portfolio(asset);
              break;
            }

          };
        }
        else
          cout << "Invalid input. Please input your command again.\n";

      }// end of one action

      pay_interest(borrow, cash);
      nRound++;
    }// end of one round

    //end of Game
    cout << "Game ends!\n"
    << "Your portofolio:\n";
    result(asset);
    cout << "Cash: $" << cash << "\n"
    << "Transactions:\n";
    transaction_review(t, number_t);

}
