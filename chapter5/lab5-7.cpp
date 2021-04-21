//write a program that caculates the 2 to the n_th power(n is a negative or positive).
// e,g, if n =10, calculate 2**10 =1024.(do not use pow function())
#include <iostream>
using namespace std;
int main()
{
  int base, exp;
  int i;
  double pownum;
  cout << "Input the base and power number: " << endl;
  cin >> base >> exp;

  i = 0;
  pownum = 1;
  if (exp > 0)
  {
    while(i < exp)
    {
      pownum *= 2.0;
      i++;
    }
    cout << pownum << endl;
  }
  else
  {
    pownum *= -1;
    while (i < exp)
    {
      pownum *= 2.0;
      i++;
    }
    pownum = 1.0/pownum;
    cout << pownum << endl;

  }
}




























//write a program that finds the sequesnce of 2 to power n in the given range.
// e.g, if the range = [0,100]show the list2,4,8,32,64.
