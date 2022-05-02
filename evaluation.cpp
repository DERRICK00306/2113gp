#include <iostream>
using namespace std;

void evaluation(double net_value)
{
  if (net_value < 500000)
  {
    cout << "You have lost" << (1000000 - net_value) << "with an intial fund of $1,000,000.\n"
    << "Keep trying next time!\n";
  }
  else if (net_value < 1000000)
  {
    cout << "You have lost" << (1000000 - net_value) << "with an intial fund of $1,000,000.\n"
    << "Nice try though!\n";
  }
  else if (net_value < 2000000)
  {
    cout << "You have made a fortune of " << net_value << "with an intial fund of $1,000,000.\n"
    << "Great job!\n";
  }
  else
  {
    cout << "You have made a fortune of " << net_value << "with an intial fund of $1,000,000.\n"
    << "You're truly an investment genius!\n";
  }
}
