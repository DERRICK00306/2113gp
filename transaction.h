#ifndef _TRANSACTION_H
#define _TRANSACTION_H
#include<string>
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
void grow_transaction(Transaction* &t, int& t_size, int grow);

void add_transaction(Transaction*& t, double price, int volume, string round, string name,
                      string status, int &number_t, int &t_size);

void transaction_review(Transaction*& t, int number_t);
#endif
