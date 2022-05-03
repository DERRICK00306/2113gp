#ifndef _OFFER_BID_H
#define _OFFER_BID_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include"struct.h"
using namespace std;

void offer_bid(Asset a[8], double &cash, string round, Transaction * &t, int &number_t, int &t_size);
#endif
