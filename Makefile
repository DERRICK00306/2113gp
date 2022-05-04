print_news.o: print_news.cpp print_news.h
	g++ -c print_news.cpp

update_price.o: update_price.cpp update_price.h struct.h
	g++ -c update_price.cpp

print_market.o: print_market.cpp print_market.h struct.h
	g++ -c print_market.cpp

print_portfolio.o: print_portfolio.cpp print_portfolio.h struct.h
	g++ -c print_portfolio.cpp

transaction_verification.o: transaction_verification.cpp transaction_verification.h struct.h
	g++ -c transaction_verification.cpp

transaction.o: transaction.cpp transaction.h struct.h
	g++ -c transaction.cpp

purchase_and_sell.o: purchase_and_sell.cpp purchase_and_sell.h print_portfolio.h transaction.h struct.h
	g++ -c purchase_and_sell.cpp

borrow.o: borrow.cpp borrow.h
	g++ -c borrow.cpp

offer_bid.o: offer_bid.cpp offer_bid.h struct.h transaction.h print_portfolio.h
	g++ -c offer_bid.cpp

pay_interest.o: pay_interest.cpp pay_interest.h
	g++ -c pay_interest.cpp

evaluation.o : evaluation.cpp evaluation.h
	g++ -c evaluation.cpp

result.o: result.cpp result.h
	g++ -c result.cpp

main.o: main.cpp print_news.h update_price.h print_market.h transaction_verification.h purchase_and_sell.h pay_interest.h offer_bid.h borrow.h transaction.h print_portfolio.h evaluation.h result.h struct.h
	g++ -c main.cpp

main: main.o print_news.o update_price.o print_market.o transaction_verification.o purchase_and_sell.o pay_interest.o offer_bid.o borrow.o transaction.o print_portfolio.o evaluation.o result.o
	g++ -pedantic-errors -std=c++11 main.o print_news.o update_price.o print_market.o transaction_verification.o purchase_and_sell.o pay_interest.o offer_bid.o borrow.o transaction.o print_portfolio.o evaluation.o result.o -o main
