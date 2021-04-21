// RAHMAT

/*#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
  int base, exponent;
  int counter;
  int num = 1;

  cout << "Please enter the base and the exponent: " << endl;
  cin >> base >> exponent;
  counter = exponent;
  while (counter > 0) 
  {
    num = num * base;
    counter -= 1;
  }
  cout << base << "**" << exponent << " = " << num << endl;
  return 0;
}*/
#include <iostream>
using namespace std;

void primenum(int, int);

int main()
{
  int i, begin, end, num;
  int prim_num;
  cout << "I will find the prime numbers in a range: " << endl;
  cout << "please Enter first numbers: " << endl;
  cin >> begin; 
  cout << "please enter end number" << endl;
  cin >> end;
  cout << "the prime numbers int the range: " << begin << " and " <<  end << " are: " << endl;

  primenum(begin, end);

  
} 
  
void primenum (int i , int end)

{
  int num;

  for (num = 2; num <= end; num++)
  {
    for (i = 2; i <= (num/2); i++)
    {
      if (num % i == 0)
      {
        i = num;
        break;
      }
    }
    if (i != num)
    {
      cout << num << " ";
    }
  }
}
