// wrtie a program that calculates the 2 to the n_th power(n is a negative or positive integer) by using function. double nthpowerp(int number) and double nthpowern(int number).
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

double nthpowerp(int);
double nthpowern(int);
void printout(int);

int main()
{
  int n;
  int result;

  cout << "Enter your input"<<endl;
  cin >> n;

  if (n > 0)
  {
    result = nthpowerp(n);
  }
  else if (n < 0) 
  {
    result = nthpowern(n);
  }
  else 
  {
    result = 1;
  }

	cout << "result: " <<  result << endl;
  

}

double nthpowern(int num)
{
  int i;
  float invertnum;
  int powernum = 1;

  num = num * -1;

  for (i = 0; i < num; i++)
  {
    powernum *= 2;
  }
  invertnum = 1.0 / powernum;

  cout << "2 " << "^" << num << "= " << invertnum << endl;

  return invertnum;
}

double nthpowerp(int num)
{
  int i;
  int nthpower = 1;
  int n;

  for (i = 0; i < num; i++)
  {
    nthpower *= 2;
  }
  cout << "2 " << "^" << num << "= " << nthpower << endl;
  return nthpower;
}

void printout(int num)
{
  cout << "the result is: " << setw(10) << fixed << setprecision(5) << num << endl;

}



// logic help to understand the question: