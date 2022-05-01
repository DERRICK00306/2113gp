print_news.o: print_news.cpp print_news.h
	g++ -c print_news.cpp

main.o: main.cpp
	g++ -c main.cpp

main: main.o print_news.o
	g++ main.o print_news.o -o main
