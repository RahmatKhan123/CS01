//write a program that finds the maximum value of the 10 number of inputs.

#include <iostream>
using namespace std;
int main()
{
  const int NUM = 10;
  int max =0; 
  int number;
  int i;

  cout << "In this program i max out form the number of ur inputs: " << endl;
  for (i = 0; i < NUM; i++)
    cin >> number;
  while ((i ==0 ) || (max < number))
  {
    max = number;
    cout <<"the maximum number is: " << max << endl;

  }
}