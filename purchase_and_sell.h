#include<iostream>
#include<string>
using namespace std;
#ifndef _PURCHASE_SELL_H
#define _PURCHASE_SELL_H

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

void purchase_or_sell(Asset a[8], string action, string name, int amount, string time, Transaction * &t, int &number_t, int &t_size);

#endif
