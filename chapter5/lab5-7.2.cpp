//write a program that caculates the 2 to the n_th power( n is a negative or positive integer)

#include <iostream>
using namespace std;
int main()
{
  int n, num;
  int nthpower = 1;

  float nthinverpownum;

  cout << "Input a number and tell you your number to the power two: " << endl;
  cin >> n;
  

  if (n > 0)
    num = n;
  
  if (n < 0)
    num = n * -1;
  

  for (int i = 0; i < num; i++)
  {
    cout << i << endl;
    
  nthpower *= 2;
 
  }
  if (n<0)
    nthinverpownum = 1.0/nthpower;
  cout << nthpower;
  
}