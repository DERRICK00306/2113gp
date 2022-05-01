#ifndef _PAY_INTEREST_H
#define _PAY_INTEREST_H

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
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

void pay_interest(int borrow, double & cash);
#endif
