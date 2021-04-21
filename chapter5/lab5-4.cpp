//write a program to find the even numbers in a given range. 
// the range will be be determind by the user input with two integers.
#include <iostream>
using namespace std;
int main()
{
  int x, y;
  int i;
  
  cout << "Please input two numbers in the range 1 to 100: " << endl;
  cin >> x >> y;
  
  do 
  {
    if ((x > y) || (x < 0) || (y > 100))
    {
      cout << "input again: " << endl;
      cin >> x >> y;
    }
    i = x;
    if (i % 2 == 0)
    cout << i << endl;
    i++;
  }while ( i < y);
    

}

    
    
    
/*int begin, end, i;
  cout << "enter two numbers betweeb 0 and 100: " << endl;
  cin >> begin >> end;

  if ((begin > end) || ((begin > 0 )) || (end > 100))
  i = begin;
  while (i < end)
  {
    if (i % 2 == 0)
      cout << i;
    i++;
  }*/