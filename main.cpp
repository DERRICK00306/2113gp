#include<iostream>
#include<string>
#include"print_market.h"

using namespace std;

struct Asset {
    string asset_name;
    double current_price;
    int holding_volume;
    double average_price;
    string catogory;

};

double update_price(); // random rate of return

double offer_bid(); // random offer / bid  price and volume

double interest();


void update_asset_price();

void print_market(Asset a); //print stock price (market information) || price and return

void print_portfolio(Asset a); // print user's portfolio || gain, loss, rate

void print_news();

void purchase_or_sell(string name, double amount);

void borrow();

void deal_with_client();

void pay_interest();

void transaction_review();  // pointer

void result();


int main(){
    Asset asset[8];
    asset[0] = {"APPLE",     170,  0, 0, "Stock"};
    asset[1] = {"TESLA",     1026, 0, 0, "Stock"};
    asset[2] = {"MICROSOFT", 297,  0, 0, "Stock"};
    asset[3] = {"AMAZON",    3090, 0, 0, "Stock"};
    asset[4] = {"OIL",       100,  0, 0, "Commodity"};
    asset[5] = {"GOLD",      1950, 0, 0, "Commodity"};
    asset[6] = {"BITCOIN",   42500,0, 0, "DIGITAL"};
    asset[7] = {"CNY",       6380, 0, 0, "CURRENCY"};
    cout << "Gamerule" << endl;
    cout << "List of command" << endl;
    cout <<  "Start" << endl;

    while(true){
        cout << "market" << endl;
        cout << "list of command" << endl;
        cout << "Current Round" << endl;
        while(true){
            cin >>;
        }

    }
}
