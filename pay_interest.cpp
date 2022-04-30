#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

void pay_interest(int borrow, int & cash)
{
  string pool[10];
  pool[0] = "we go for a fancy dinner tonight?";
  pool[1] = "you go with me to check an amazing dress?";
  pool[2] = "a scarf as a Mother's Day gift?";
  pool[3] = "we go for a family trip together next week?";
  pool[4] = "you go shopping with me?";
  pool[5] = "a movie night, plus some nice food?";
  pool[6] = "we pick up your little sister from school this afternoon together? You can treat her with some nice candy.";
  pool[7] = "a gym night together? They are offering family membership in discount.";
  pool[8] = "we select a birthday gift for your father tonight?";
  pool[9] = "you accompany me to go to Aunt Jensen's wedding next week?";

  srand(time(NULL)); int index;
	index = rand() % 10;

  cout << "Mom: Sweetheart, I do notice you've borrowed some money from me...\n"
       << "Mom: That's okay, you don't have to return it, but I do want more family time with you."<<
       << "Mom: How about " << pool[index] << endl;

  cout << "I: Sure..." << endl;

  cout << "------------------------------" << endl;

  int interest_rate = rand()%4 + rand()%4 + rand()%4 + 1;
  int expense = borrow * interest_rate / 100;

  cout << "Event bill: $" << expense << endl;

  cash -= expense;

  cout << "Current cash: $" << cash << endl;

  cout << "------------------------------" << endl;
}
