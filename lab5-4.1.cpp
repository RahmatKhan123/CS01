#include <iostream>
using namespace std;
int main() //writing a program that find out the even numbers in a given range.
{
  int begin, end;
  int i;

  do 
  {
    cout << "enter two number in the range 1 to 100" << endl;
    cin >> begin >> end;
    if ((begin > end) || ((begin < 0) || (end > 100)))
    {
      cout << "your input is out of range: " << endl;
     
      cout << "please input again:" << endl;
      cin >> begin >> end;
    }
    else if(begin < end)
    {

      i = begin;
      if (i % 2 == 0)
      cout << i;
    }
    
    i++;
    
  }
  while(i < end);

}