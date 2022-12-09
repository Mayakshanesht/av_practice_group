#include "OddNumbers1.h"
OddNumbers1::OddNumbers1(int a, int b)
{
  low=a;
  high=b;

}

int OddNumbers1::find_odd_numbers()
{
  int count=0;
  for (int i=low;i<=high;i++)
    {
      int j=i%2;
      if ((j%2) != 0)
          {
            count+=1;
          }
    }
return count;
}
