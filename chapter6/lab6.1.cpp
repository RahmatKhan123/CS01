//write a program to find prime numbers in a given range using function.
#include <iostream>
using namespace std;

void isprimelist(int, int);
int inputvalidation(int, int);

int main()
{
  int begin, end;
  int res;
  cout << "Input two numbers in range 0 to 100: " << endl;
  cin >> begin >> end;

  res = inputvalidation(begin, end);
  if (!res)
    exit(0);

  isprimelist(begin, end);

}
int inputvalidation(int begin, int end)
{
  if (begin > end || begin < 0 || end > 100)
    return (0);
  else
    return 1;
}
void isprimelist(int begin, int end)
{
  int i, j;

  for (i = begin; i <= end; i++)
  {
    for (j = 2; j < (i/2); j++)
      if (i % j == 0)
        break;
    if( j > i/2)
      cout << i << "is prime number: " << endl;
  }
}