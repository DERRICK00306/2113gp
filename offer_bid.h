#ifndef _OFFER_BID_H
#define _OFFER_BID_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include"struct.h"
using namespace std;
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
void offer_bid(Asset a[8], double cash, string round, Transaction * &t, int &number_t, int &t_size);
#endif
