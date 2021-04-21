//this program display a list of numbers and their //squares.
#include <iostream>
using namespace std;
int main()
{
  int min = 1, max = 10;
  int num = min;

  cout << "Enter number number squared: \n";
  cout << "-------------------------\n";
  while (num <= max)
  {
    cout << num << "\t\t" << (num * num) << endl;
    num++;
  }
}