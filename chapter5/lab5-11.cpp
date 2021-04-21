//make a program that find prime numbers in a given range.
#include <iostream>
using namespace std;
int main()
{
  int begin, end;
  int i, j, count = 0, find = 0;
  cout << "Input two numbers: " << endl;
  cin >> begin >> end;

  if (begin > end)
  {
    cout << "Input being must less then end: " << endl;
    cin >> begin >> end;
  }
  for (i = begin; i < end; i++)
  {
    
    for(j = 2; j < (i/2); j++)
    {
      if (i % j == 0)
      count++;
    }
    if(count == 0 &&i != 1)
    {
      find++;
      cout << i << endl;
      count = 0;
    }
    count = 0;
    cout << find << "is prime: " << endl;
  }
}