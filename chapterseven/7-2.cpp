//Concepts:
//Compare two array contents
//If the value in “mask” array is 1, the value in “number” array keeps //its value. Otherwise, if the value in “mask” array is 0, the value in //“number” array will be changed as 0.
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int makearray(int[]);
void makemask(int [], int last);
void applymask(int [], int [], int);
void printout(int[], int);

const int SIZE = 100;

int main()
{
  int mask[SIZE];
  int number[SIZE];
  int last;

  last = makearray(number);
  printout(number, last);
  makemask(mask, last);
  printout(mask, last);

  applymask(number, mask, last);
  printout(number, last);
}

int makearray(int number[])//this function will have random numbers between 0 and 100
{
  int last;
  srand(time(NULL));
  do{
    last = rand() % 20;
  }while(last < 10);
  for(int i = 0; i < last; i++)
  {
    number[i] = rand() % 100; //this array will have random number of zero and 100.
  }
  return last;
}

void makemask(int mask[], int last)// this function will have random numbers of 0 and 1.
{
  for(int i = 0; i < last; i++)
  {
    mask[i] = rand() % 2;// this equal to creating random number of 0 and 1.
  }
}

void applymask(int number[], int mask[], int last)
{
  for (int i = 0; i < last; i++)
  {
    //number[i] = (mask[i] && number[i]) ? number[i] : 0;//The ? and : are part of the conditional operators syntax. The ? indicates that the left expression should be a boolean evaluation true or false. The : delineates the true and false results. The left-hand of : is the result if the expression evaluates to true and the right-hand of : is the result if the expression is false.


    if(mask[i])
    {
      number[i] = number[i];
    }
    else 
      number[i] = 0;
  }
}

void printout(int number[], int last)
{
  for (int i=0; i < last; i++)
    cout << setw(5) << number[i];
  cout << endl;
}