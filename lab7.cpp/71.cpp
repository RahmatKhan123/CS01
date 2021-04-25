//Concepts:
//Find the Nth largest number in an array.

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

int makearray(int []);
void bubble(int [], int);
void printout(int [], int);

int SIZE = 100;

int main()
{
  int number[SIZE];
  int last;

  last = makearray(number);
  printout(number, last);
  bubble(number,last);
  printout(number,last);

}
int makearray(int number[])// creating random number in this function.
// between 0 and 100.
{
  int last;
  srand(time(NULL));
  do {
    last = rand() % 20;
  }while (last > 10);
  //last = rand() % 10 + 10;
  for (int i = 0; i < last; i++)
  {
    number[i] = rand() % 100;
  }
  return last;
}

void bubble(int number[], int last)// we compare the values of the array element to it;s adjacent value, if the left one is greater then the right one, shift greater to the right.
{
  for (int i = 0; i < last-1; i++)
  
    if (number[i] > number[i+1])
      swap(number[1], number[i+1]);
  
}
void printout(int number[], int last)
{
  for (int i = 0; i < last; i++)
    cout << setw(5) << number[i];
  cout << endl;
}
  