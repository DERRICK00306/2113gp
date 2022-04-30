#include <iostream>
#include <iomanip>
#include <string>
#include "print_market.h"
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

void print_market(Asset a[], double r[]) {
    int i;
    cout << "The table below shows the current market information:" << endl;
    cout << "------------------------------------------------------------" << endl; //50 "-" intotal
    cout << "| " << setw(10) << "Name" << " | " << setw(13) << "Current Price"
        << " | " << setw(12) << "Return" << " | " << setw(12) << "Catagory" << " |" << endl; // 50 space in total

    for (i = 0; i < 8; i++) {

        cout << "| " << setw(10) << a[i].asset_name << " | " << setw(13) << a[i].current_price
            << " | " << setw(12) << r[i]*100 + "%" << " | " << setw(12) << a[i].catogory
            << " |" << endl;
    }
    cout << "------------------------------------------------------------" << endl;
}


//struct Asset {
    //string asset_name;
    //double current_price;
    //int holding_volume;
    //double average_price;
    //string catogory;

//};
