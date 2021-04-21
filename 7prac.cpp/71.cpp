//Concepts:
//Find the Nth largest number in an array.

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int makearray(int []);
void bubble(int [], int);
void printout(int[], int);

const int SIZE = 100;
int main()
{
  int last;
  int number[SIZE];
  last = makearray(number);
  printout(number,last);

  bubble(number,last);
  printout(number,last);
  

}
int makearray(int number[])
{
  int last;
  srand(time(NULL));
  do {
    last = rand() % 20;
  }while(last < 10);

  for (int i = 0; i < last; i++)
  {
    number[i] = rand() % 100;
  }
  return last;
}
void bubble(int number[], int last)
{
  for (int i = 0; i < last-1; i++)
  {
    if(number[i] > number[i+1])
      swap(number[i], number[i+1]);
    
  }
}
void printout(int number[], int last)
{
  for (int i = 0; i < last; i++)
  {
    cout << number[i];

  }
  cout << endl;
}