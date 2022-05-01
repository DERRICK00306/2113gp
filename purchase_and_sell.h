#ifndef _PURCHASE_SELL_H
#define _PURCHASE_SELL_H

#include<iostream>
#include<string>
using namespace std;
#include"struct.h"

void purchase_or_sell(Asset a[8], string action, string name, int amount, string time, Transaction * &t, int &number_t, int &t_size);

#endif
