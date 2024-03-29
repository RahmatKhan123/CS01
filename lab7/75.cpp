// Circular N left rotation in Arrays
// [1,2,3,4,5] and we want to make 3 left rotation => Result is [4,5,1,2,3]
// [10,13,5,7,2] and we want to make 1 left rotation => Result is [13,5,7,2,10]
// Do not use the additional array. In-place swapping.
 
#include <iostream>
#include <iomanip>
using namespace std;
 
void shiftleft(int [], int, int);
void shiftleftone(int [], int);
void printout(int [], int);

// Concepts:
//Process the array elements in order to shift left the elements in the //array.
//When the value N(user input) is given, the first N elements of the //array will be moved to the end of the array as follows:

 
 
int main()
{
  const int SIZE=10;
  int shiftcount;
  int number[SIZE] = {0,1,2,3,4,5,6,7,8,9};
 
  cout << "Enter your number for circular shift left\n";
  cin >>  shiftcount;
 
  printout(number, SIZE);
  shiftleft(number, SIZE, shiftcount);
  printout(number, SIZE);
}
void shiftleft(int number[], int SIZE, int count)
{
  for (int i = 0; i < count; i++)
    shiftleftone(number, SIZE);
 
}
void shiftleftone(int number[], int SIZE)
{
  int temp = number[0];
  for (int i = 0; i < SIZE-1; i++)
  {
    number[i] = number[i+1];
  }
  number[SIZE-1] = temp;
}
void printout(int number[], int SIZE)
{
  for (int i = 0; i < SIZE; i++)
  {
    cout << setw(3) << number[i];
  }
  cout << endl;
}
