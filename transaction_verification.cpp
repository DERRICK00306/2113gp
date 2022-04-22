#include<iostream>
#include<string>
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

bool transaction_verification(Asset a[8], string action, string name, int amount, double cash)
{
  if (action == "B")
  {
    int current_price = 0;
    for (int i = 0; i < 8; i++)
    {
      if (a[i].asset_name == name)
      {
        current_price = a[i].current_price;
        break;
      } //consider if it is a wrong name
    }
    double total_expense = current_price * amount;
    if (total_expense > cash)
    {
      cout << "No enough cash. Transaction failed." << endl;
      return false;
    }
  }
  else if (action == "S")
  {
    int current_vol = 0;
    for (int i = 0; i < 8; i++)
    {
      if (a[i].asset_name == name)
      {
        current_vol = a[i].holding_volume;
        break;
      } //consider if it is a wrong name
    }
    if (amount > current_vol)
    {
      cout << "Transaction volume exceeds current holding volume. Transaction failed." << endl;
      return false;
    }
  }
  else
  {
    cout << "Invalid instruction" << endl;
    return false;
  }
  return true;
}

int main()
{
  Asset asset[8];

  asset[0] = {"APPLE",     170,  400, 130, "Stock"};
  asset[1] = {"TESLA",     1026, 0, 0, "Stock"};
  asset[2] = {"MICROSOFT", 297,  0, 0, "Stock"};
  asset[3] = {"AMAZON",    3090, 0, 0, "Stock"};
  asset[4] = {"OIL",       100,  0, 0, "Commodity"};
  asset[5] = {"GOLD",      1950, 0, 0, "Commodity"};
  asset[6] = {"BITCOIN",   42500,0, 0, "Digital"};
  asset[7] = {"CNY",       6380, 0, 0, "Currency"};

  int t_size = 8; // initial transaction capacity
  int number_t = 0; // current number of transaction
  Transaction * t = new Transaction[t_size];
  double cash = 1000000; //initial cash: $1,000,000
  int borrow = 0;
  cout << transaction_verification(asset, "B", "APPLE", 4000, cash) << endl;
  cout << transaction_verification(asset, "S", "APPLE", 300, cash) << endl;
}
