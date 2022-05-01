print_news.o: print_news.cpp print_news.h
	g++ -c print_news.cpp

update_price.o: update_price.cpp update_price.h
	g++ -c update_price.cpp

print_market.o: print_market.cpp print_market.h
	g++ -c print_market.cpp

transaction_verification.o: transaction_verification.cpp transaction_verification.h
	g++ -c transaction_verification.cpp

print_portfolio.o: print_portfolio.cpp print_portfolio.h
	g++ -c print_portfolio.cpp

transaction.o: transaction.cpp transaction.h
	g++ -c transaction.cpp

purchase_and_sell.o: purchase_and_sell.cpp purchase_and_sell.h print_portfolio.h transaction.h
	g++ -c purchase_and_sell.cpp

main.o: main.cpp
	g++ -c main.cpp

main: main.o print_news.o update_price.o print_market.o transaction_verification.o purchase_and_sell.o
	g++ main.o print_news.o update_price.o print_market.o transaction_verification.o purchase_and_sell.o -o main
