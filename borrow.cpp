#include <iostream>
#include <iomanip>
#include "borrow.h"

using namespace std;

void borrow_from_mom(int& borrow, double& cash){
  cout << fixed << setprecision(1);
  cout << "Mom: Sweetheart, you want some money for your investment?" << endl;

  cout << "I: Yes Mom, I just need ..." << endl
       << "Input your amount: (an integer) " << endl;

  int borrow_proposal;

  cin >> borrow_proposal;

  cout << "------------------------------" << endl;
  int total_borrow = borrow_proposal + borrow;
  if (total_borrow < 1000000)
  {
    if (borrow_proposal < 50000)
    {
      cout << "Mom: Okay. No big deal." << endl;
    }
    else
    {
      cout << "Mom : That's a lot of money! You'd better spend it wisely." << endl;
    }

    borrow += borrow_proposal;
    cash += borrow_proposal;
    cout << "You have successfully borrowed $" << borrow_proposal << " from your mom." << endl
         << "Total borrowing: $" << borrow << endl
         << "Current cash: $" << cash << endl;
  }
  else
  {
    cout << "Mom: I can borrow you no more than one million dollars in total. You've asked too much." << endl
         << "Your attempt to borrow failed." << endl
         << "Total borrowing: $" << borrow << endl;
  }
  cout << "------------------------------" << endl;
}
