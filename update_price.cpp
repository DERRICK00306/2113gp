#include <iostream>
#include <cstdlib>
#include <ctime>

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

void update_price(Asset a[8], double r_array[8])
{
  srand(time(NULL));

  //double r_array[asset_number];

  for (int i = 0; i < 8; i++)
  {
    int increment = (rand()%21-10)
                    +(rand()%11-5)
                    +(rand()%5-2)
                    +3; //incremental return [-14,20] with an average 3 and concentrate in the middle
    double r = increment/100;
    a[i].current_price *= 1+r ;
    r_array[i] = r;
  }
  //return r_array;
}
