// gcd.h
#ifndef _PRINT_MARKET_H
#define _PRINT_MARKET_H
#include<string>
using namespace std;
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
void print_market(Asset a, double r);
#endif
