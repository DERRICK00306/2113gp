#ifndef _TRANSACTION_H
#define _TRANSACTION_H
#include<string>
using namespace std;

void grow_transaction(Transaction* &t, int& t_size, int grow);

void add_transaction(Transaction*& t, double price, int volume, string round, string name,
                      string status, int &number_t, int &t_size);

void transaction_review(Transaction*& t, int number_t);
#endif
