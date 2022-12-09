#include<iostream>
#include "OddNumbers1.h"
using namespace std;

int main()
{
  OddNumbers1 obj(0,5);
  int sum=obj.find_odd_numbers();
  cout<< sum << endl ;
  return 0;

}
