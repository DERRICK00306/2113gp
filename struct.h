#include <string>
using namespace std;

#ifndef STRUCT_H
#define STRUCT_H

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

#endif
