#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void update_price(Asset a[], double r_array[]){
  srand(time(NULL));

  //double r_array[asset_number];

  for (int i = 0; i < asset_number; i++)
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
