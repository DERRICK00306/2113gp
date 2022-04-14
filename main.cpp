#include<iostream>
#include<string>

using namespace std;

const int asset_number = 8;

struct Asset {
    string asset_name;
    double current_price;
    int holding_volume;
    double average_price;
    string catogory;

};

#include"print_market.h"
#include"print_portfolio.h"
#include"print_news.h"
#include"update_price.h"

void update_price(Asset a[], double r_array[]);// random rate of return

double offer_bid(); // random offer / bid  price and volume

double interest();

void print_market(Asset a[asset_number], double r[asset_number]); //print stock price (market information) || price and return

void print_portfolio(Asset a[asset_number]); // print user's portfolio || gain, loss, rate

void print_news();

void purchase_or_sell(string name, double amount);

void borrow();

void deal_with_client();

void pay_interest();

void transaction_review();  // pointer

void result();


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
    cout << "Gamerule" << endl;
    cout << "List of command" << endl;
    cout <<  "Start" << endl;

    int round = 1;

    while(round < 10){
      cout << "Round " << round << endl;
      double r_array[asset_number];
      update_price(asset, r_array);
      print_market(asset, r_array);
      //cout << "news" << endl;
      //cout << "list of command" << endl;
      //cout << "Current Round" << endl;
      round++;

      //while(true){
      //    cin >>;
      //}

    }
}
