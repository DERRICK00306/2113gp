#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
#include"struct.h"

void update_price(Asset a[8], double r_array[8])
{
  srand(time(NULL));

  for (int i = 0; i < 8; i++)
  {
    int increment = (rand()%21-10)
                    +(rand()%11-5)
                    +(rand()%5-2)
                    +3; //incremental return [-14,20] with an average 3 and concentrate in the middle
    double r = increment/100.0;
    a[i].current_price *= 1+r ;
    r_array[i] = r;
  }
}
