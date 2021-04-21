// write a program to find the even numbers in range. the range will be determind by the user input. use while loop
#include <iostream>
using namespace std;
int main()
{
  int begin, end, i;
  cout << "enter two numbers betweeb 0 and 100: " << endl;
  cin >> begin >> end;

  if ((begin > end) || ((begin > 0 )) || (end > 100))
  i = begin;
  while (i < end)
  {
    if (i % 2 == 0)
      cout << i;
    i++;
  }
  
}