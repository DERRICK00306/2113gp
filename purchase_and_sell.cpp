#include<iostream>
#include<string>
#include"purchase_and_sell.h"
#include"print_portfolio.h"
#include"transaction.h"
#include"struct.h"
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
void purchase_or_sell(Asset a[8], string action, string name, int amount,
  string time, Transaction * &t, int &number_t, int &t_size){
  int i;
  for (i=0; i<8; i++){
    if (a[i].asset_name == name){
      if ( action == "B"){
        int old_volume = a[i].holding_volume;
        a[i].holding_volume += amount;
        a[i].average_price = (old_volume * a[i].average_price + amount * a[i].current_price)/a[i].holding_volume;
      }
      else if (action == "S"){
        int old_volume = a[i].holding_volume;
        a[i].holding_volume -= amount;
        if (a[i].holding_volume == 0){ a[i].average_price = 0;}
        else {
        a[i].average_price = (old_volume * a[i].average_price - amount * a[i].current_price)/a[i].holding_volume;
        }
      }
      add_transaction(t, a[i].current_price, amount, time, a[i].asset_name, action, number_t, t_size);
    }
  }
  cout << "Your current portfolio: " << endl;
  print_portfolio(a);
}
