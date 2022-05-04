#include<iostream>
#include<iomanip>
#include<string>
#include "print_portfolio.h"
#include "struct.h"
using namespace std;

void print_portfolio(Asset a[8]) {
    cout << fixed << setprecision(1);
    int i;
    cout << "The following table shows your portfolio:" << endl;
    cout << "-----------------------------------------------------------------------------------------------------" << endl; //50 - in intotal
    cout << "| " << setw(10) << "Asset_name" << " | " << setw(13) <<
        "Current_price" << " | " << setw(13) << "Average_price" << " | " << setw(7)
        << "Volume" << " | " << setw(13) << "Total_earning" << " | " << setw(11) <<
        "Return_rate" << " | " << setw(12) << "Category" << " |" << endl;
    for (i = 0; i < 8; i++) {
        double earning; int r;
        earning = (a[i].current_price - a[i].average_price) * a[i].holding_volume;
        if (a[i].average_price == 0)r = 0;
        else r = ((a[i].current_price - a[i].average_price) / a[i].average_price)*100;
        cout << "| " << setw(10) << a[i].asset_name << " | " << setw(13) <<
            a[i].current_price << " | " << setw(13) << a[i].average_price << " | " << setw(7)
            << a[i].holding_volume << " | " << setw(13) << earning << " | " << setw(11) <<
            to_string( r) + "%" << " | " << setw(12) << a[i].catogory << " |" << endl;
    }
    cout << "-----------------------------------------------------------------------------------------------------" << endl;
}
