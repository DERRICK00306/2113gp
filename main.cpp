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

using namespace std;

const int asset_number = 8;
/*
struct Asset {
    string asset_name;
    double current_price;
    int holding_volume;
    double average_price;
    string catogory;

};



struct Transaction{
    double price;
    int volume;
    string time;
    string name;
    string status;
};
*/

bool transaction_verification(Asset a[8], string action, string name, int amount, double cash); //to verify if a transaction is possible (purchasing does not exceed total money, selling does not exceed total volume)

void update_price(Asset a[8], double r_array[8]);// random rate of return

void offer_bid(Asset a[8], double cash, int round, Transaction * &t, int &number_t, int &t_size); // random offer / bid  price and volume

void print_market(Asset a[asset_number], double r[asset_number]); //print stock price (market information) || price and return

void print_portfolio(Asset a[asset_number]); // print user's portfolio || gain, loss, rate

void print_news();

void purchase_or_sell(Asset a[8], string action, string name, int amount, string time, Transaction * &t, int &number_t, int &t_size);

void borrow_from_mom(int& borrow, double& cash);

void pay_interest(int borrow, int & cash);

void grow_transaction(Transaction* &t, int& t_size, int grow);

void add_transaction(Transaction*& t, double price, int volume, string round, string name, string status, int &number_t, int t_size);

void transaction_review(Transaction*& t, int number_t);

double result(Asset a[8]);

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

int main(){
    //initialization

    Asset asset[asset_number];
    asset[0] = {"APPLE",     170,  0, 0, "Stock"};
    asset[1] = {"TESLA",     1026, 0, 0, "Stock"};
    asset[2] = {"MICROSOFT", 297,  0, 0, "Stock"};
    asset[3] = {"AMAZON",    3090, 0, 0, "Stock"};
    asset[4] = {"OIL",       100,  0, 0, "Commodity"};
    asset[5] = {"GOLD",      1950, 0, 0, "Commodity"};
    asset[6] = {"BITCOIN",   42500,0, 0, "Digital"};
    asset[7] = {"CNY",       6380, 0, 0, "Currency"};

    int t_size = 8; // initial transaction capacity
    int number_t = 0; // current number of transaction
    Transaction * t = new Transaction[t_size];
    double cash = 1000000; //initial cash: $1,000,000
    int borrow = 0;


    cout << "Gamerule" << endl;
    //copy readme.md

    cout << "List of command" << endl;
    //

    cout <<  "Start" << endl;

    int nRound = 1;

    while(nRound < 10){
      stringstream ss;
      ss << nRound;
      string round = ss.str();
      cout << round << endl;
      double r_array[asset_number];
      update_price(asset, r_array);
      print_market(asset, r_array);
      //cout << "news" << endl;
      print_news();
      //cout << "Current Round" << endl;
      nRound++;

      //deal_with_client(); // possibly Sir Derrick will offer a deal

      while(true){
        int command = 0;


        cout << "List of command: " << endl;
        cout << "1: Purhcase asset" << endl
             << "2: Sell asset" << endl
             << "3: Borrow money from mom" << endl
             << "4: Deal with Sir Derick (Exclusive discount!)" << endl;

        cin >> command;

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
          //case 3:
          //{
            //borrow(borrow, cash);
          //}

        };
      }

    }
    // print news, cout possible actions, action, borrow?, dealw/client?, interest

}
