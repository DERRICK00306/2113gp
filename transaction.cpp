#include<iostream>
#include<string>
#include<iomanip>
#include"transaction.h"
using namespace std;

void grow_transaction(Transaction* &t, int& t_size, int grow) {
    int i;
    int new_size = t_size + grow;
    Transaction* t_new = new Transaction[new_size];
    for (i = 0; i < t_size; i++) {
        t_new[i].price = t[i].price;
        t_new[i].volume = t[i].volume;
        t_new[i].time = t[i].time;
        t_new[i].name = t[i].name;
        t_new[i].status = t[i].status;
    }
    delete [] t;
    t = t_new;
    t_size = new_size;
}

void add_transaction(Transaction*& t, double price, int volume, string round, string name,
                      string status, int &number_t, int &t_size) {
    if (number_t >= t_size) { grow_transaction(t, t_size, 3); }
    t[number_t].price = price;
    t[number_t].volume = volume;
    t[number_t].time = round;
    t[number_t].name = name;
    t[number_t].status = status;
    number_t += 1;
}

void transaction_review(Transaction*& t, int number_t) {
    int i;
    cout << "The table below shows your Histroy: " << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "| " << setw(10) << "Name" << " | " << setw(9) << "Price" <<
        " | " << setw(8) << "Volume" << " | " << setw(11) << "Time" << " | " <<
        setw(7) << "Status" <<  " |" << endl;
    for (i = 0; i < number_t; i++) {
        cout << "| " << setw(10) << t[i].name << " | " << setw(9) << t[i].price <<
            " | " << setw(8) << t[i].volume << " | " << setw(11) << t[i].time << " | "
            << setw(7) << t[i].status << " |" << endl;
    }
    cout << "-------------------------------------------------------------" << endl;
}
