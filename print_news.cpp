#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
#include"print_news.h"
using namespace std;
// Fictional news to be randomly selected for each round
void print_news(){
	string pool[20];
	pool[0] = "Apple will release IPHONE 21 in the coming year.";
	pool[1] = "Apple announece that they will add new eye's control in its new IPAD, IPAD Pro X.";
	pool[2] = "Elon Mask make a post on twitter saying that their firm will only accept payment by bitcoin.";
	pool[3] = "There is saying that thier firm are currently invent driverless airplane.";
	pool[4] = "Windows 20 will be free and available on Microsoft's website soon!";
	pool[5] = "JPMorgan will purchase 20% shares of Microsoft from its CEO.";
	pool[6] = "Buffet predicts that Microsoft's share price will reach 500 dollar in next month.";
	pool[7] = "Statistics show that Amozon is continous doing well in last season.";
	pool[8] = "Due to the wide spread of COVID-19, people are away from puchasing online.";
	pool[9] = "US government announce that they will release 40 millions bbl crude oil in the market.";
	pool[10] = "Saudi Arabia government announce they will reduce their oil production.";
	pool[11] = "The chief researcher in Goldman Sachs says that the oil price will reach historical high soon.";
	pool[12] = "More and more companies accept payment by bitcoin.";
	pool[13] = "Elon Mask announce their firm will use 30% of its revenue to invest in bitcoin.";
	pool[14] = "Statistics shows that Tesla earns more in investing digital currency that producing cars.";
	pool[15] = "China's GDP grow 10% in the previous year.";
	pool[16] = "China and Russia are discussing that the transaction of oil will be paid in terms of CNY.";
	pool[17] = "COVID will end in one month.";
	pool[18] = "TAOBAO will take the place of Amozon soon.";
	pool[19] = "Apple will provide discount price for their employee.";
	srand(time(NULL)); int x;
	x = rand() % 20;
	cout << "Todays' news :" << endl;
	cout << pool[x] << "\n\n";
}
