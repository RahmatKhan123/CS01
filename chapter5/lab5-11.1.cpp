#include <iostream>
using namespace std;
int main()
{ 
  /*int i, j;
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
      cout << i << j << endl;

  }
  int i, j;
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < i; j++)
    {
      cout << i << j << endl;
    }
  }*/

  int i, j, flag;
  for (i = 2; i < 100; i++)
  {
    for (j = 2; j < i; j++)
    {
      if ((j % i) == 0)
      flag = 0;
    }
    if (flag)
      cout << i << "is prime" << endl;
      
  }
}