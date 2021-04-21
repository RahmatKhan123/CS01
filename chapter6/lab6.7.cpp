//make a program that swap three values. the 3 values are taken from the user input.
//this work will be done by calling the function"getinput(num1, num2, num3)
//the input values are swapped eachother by calling the function swap(num1, num2, num3)
//example: values(a,b,c) will be(c,a,b ) after swap.

#include <iostream>

using namespace std;

void getinput(int &, int &, int &);
void swap(int &, int &, int &);
void swap2(int &, int &);

int main()
{
  int num1, num2, num3;

  getinput(num1, num2, num3);
  cout << "before swap: " << num1 <<  num2 << num3 << endl;
  swap(num1, num3);
  swap(num2, num3);
  cout << "After swap: " << num1 << num2 << num3 << endl;

  swap(num1, num2, num3);
  cout << "After swap: " << num1 << num2 << num3 << endl;
}
void getinput( int &num1, int &num2, int &num3)
{
  cout << "Input the 3 numbers: " << endl;
  cin >> num1 >> num2 >> num3;
}
void swap2(int &num1, int &num2, int &num3)
{
  int temp;
  temp = num1;
  num1 = num3;
  num3 = num2;
  num2 = temp;
}
void swap(int &num1, int &num2)
{
  int temp;
  temp = num1;
  num1 = num2;
  num2 = temp;
}
