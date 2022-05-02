#include <iostream>
#include <iomanip>
#include <string>
#include "print_market.h"
#include "struct.h"
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
void print_market(Asset a[8], double r[8]) {
    int i;
    cout << "Current market:" << endl;
    cout << "------------------------------------------------------------" << endl; //60 "-" intotal
    cout << "| " << setw(10) << "Asset name" << " | " << setw(13) << "Current Price"
        << " | " << setw(13) << "Return" << " | " << setw(12) << "Category" << " |" << endl; // 60 space in total

    for (i = 0; i < 8; i++) {

        cout << "| " << setw(10) << a[i].asset_name << " | " << setw(13) << a[i].current_price
            << " | " << setw(12) << r[i]*100 << "%" << " | " << setw(12) << a[i].catogory
            << " |" << endl;
    }
    cout << "------------------------------------------------------------" << "\n\n";
}


//struct Asset {
    //string asset_name;
    //double current_price;
    //int holding_volume;
    //double average_price;
    //string catogory;

//};
