#include <iostream>
using namespace std;
int main()
{
  int num;
  int i, flag;
  cout << "enter the number";
  cin >> num;
  while (num > 2)
  {

      flag = 0;
      for(i = 2; i < num; i++) 
      {
          if (num % i == 0)
          {
              flag = 1;
              break;
          }
      if (flag)
          cout << num << " is not prime ";
      else
          cout << num << " is a prime number " << endl;
      }
  }
}
