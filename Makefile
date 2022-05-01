print_news.o: print_news.cpp print_news.h
	g++ -c print_news.cpp

update_price.o: update_price.cpp update_price.h
	g++ -c update_price.cpp

print_market.o: print_market.cpp print_market.h
	g++ -c print_market.cpp

main.o: main.cpp
	g++ -c main.cpp

main: main.o print_news.o update_price.o
	g++ main.o print_news.o update_price.o -o main
