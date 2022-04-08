#include<iostream>
#include<string>


using namespace std;

struct asset {
    double price;
    double r_between_period;
    int volume;
    double average_price;
    double gain_loss;
    double r_overall;

};

double update_price(); // random rate of return

double offer_bid(); // random offer / bid  price and volume

double interest();


void update_asset_price();

void print_market(); //print stock price (market information) || price and return 

void print_portfolio() // print user's portfolio || gain, loss, rate

void print_news();

void purchase_or_sell(string name, double amount);

void borrow();

void deal_with_client();

void pay_interest();

void transaction_review();  // pointer

void result();


int main(){
    cout << "Gamerule" << endl;
    cout << "List of command" << endl;
    cout <<  "Start" << endl;
    while(true){
        cout << "market" << endl;
        cout << "list of command" << endl;
        cout << "Current Round" << endl;
        while(true){
            cin >>;
        }

    }
}