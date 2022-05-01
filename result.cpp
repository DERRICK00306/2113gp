#include<iostream>
#include<string>
#include"result.h"
#include"struct.h"
using namespace std;

double result(Asset a[8]){
  int i; double sum = 0;
  for (i=0; i<8; i ++){
    sum += a[i].average_price * a[i].holding_volume;
  }
  return sum;
}
