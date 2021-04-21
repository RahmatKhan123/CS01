// write a program that calculate the summation of the given N numbers with removing the minimum and maximum number.
// ex: N =5,[2,1,5,10,7] = 2+5+7 = 14

#include <iostream>
using namespace std;
int getsum(int);
int main()
{
  int sum;
  int N;

  do 
  {
    cout << "Input a number: " << endl;
    cin >> N;

    if ( N != -1)
    {
      sum = getsum(N);
      cout << "the sum is:  " << sum << endl;

    }
  }while (N != -1);
}

int getsum(int N)
{
  int sum = 0;
  int i;
  for(i = 0; i < N; i++)
  {
    if (N < 0)
      break;
      sum += i;
  }
  return (sum);
}