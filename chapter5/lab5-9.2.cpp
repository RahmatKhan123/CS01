//write a program that calculates the summation of even number in the given range.
#include <iostream>
using namespace std;
int main()
{
  /*int begin, end;
  int i, sum;
  sum = 0;

  cout << "Input two number: " << endl;
  cin >> begin >> end;

  if (begin > end)
  {
    cout << "Input again: " << endl;
    cin >> begin >> end;
  }
  for (i = 0; i <= end; i++)
  {
    if (i % 2 == 0)
      sum += i;
  }
  cout << "the summation of even number are: " << sum << endl;*/
  int begin, end, i, sum;
  sum = 0;
  cout << "Input two numbers: " << endl;
  cin >> begin >> end;

  if (begin > end)
  {
    cout << "Please input again: " << endl;
    cin >> begin >> end;
  }
  for (i =0 ; i <= end; i++)
  {
    if(i%2==0)
    sum += i;

  }
  cout << "the summation of even numbers is " << sum << endl;
  
} 