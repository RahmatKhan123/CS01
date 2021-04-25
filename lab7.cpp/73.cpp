#include    <iostream>
#include    <ctime>
#include    <cstdlib>
#include    <cmath>
#include    <iomanip>
using   namespace   std;
 
int     makearray(int []);
void    printout(int [], int);
 
void    swapfold(int [], int);
void    sumfold(int [], int);
void    equalfold(int [], int [],  int);
 
 
const   int     SIZE = 100;
 
int     main()
{
        int     mask[SIZE];
        int     number[SIZE];
        int     equal[SIZE];
        int     last;
 
        last = makearray(number);
        printout(number, last);
 
        swapfold(number, last);
        printout(number, last);
 
        sumfold(number, last);
        printout(number, ceil(last/2.0));
 
        last = makearray(number);
        printout(number, last);
        
        equalfold(number, equal, last);
        printout(equal, ceil(last/2.0));
}
 // in the below function swapfold[] we fold the array in half and swap the array element in reverse half, such that [1,2,3,4,5,6,7] change to [7,6,5,4,3,2,1]
void    swapfold(int number[], int last) 
{
  for(int i=0; i<last/2; i++) { // this loop make the half array iteration.
    swap(number[i], number[last-i-1]); // swap function swap index 0 with last index.
  }
        // for(int i=0, j=last-1; i<j; i++, j--) {  // Works same. but use two variables.
        //  swap(number[i], number[j]);
        // }
}

// the sumfold function makes the summation of array, when the array is folded.
void sumfold(int number[], int last) //* 10 20 30 40
{
  for(int i=0; i<last/2; i++) { // this loop iterat half the array
    cout << number[i] << "\t"; // print the first half of the array:
            // new line and,
    cout << number[last-i-1] << endl;// the revers half is printed under the first half of the array.

   number[i] += number[-i-1];

  }   
}

//in the equalfold function we fold the array to half. check if the facing value same set the equalfold value to one if not the same we set the equal fold value to 0;
void equalfold(int number[], int equal[], int last)
{
  for (int i = 0; i < last/2; i++ )// this loop iterate half the array;
  {
    cout << number[i] << "\t"; // print the 1st half the array:
    cout <<  number[-i-1] << endl;// print the folded revers order of array under the 1st half
    if (number[i] == number[-i-1])// condition to check if the 1st half of the array equal the 2nd revers half of the array:
      equal[i] = 1;
    else 
      equal[i] = 0;
  }
}
 
int makearray(int   number[])
{
  int     last;
  srand(time(NULL));
  do 
  {
    last = rand() % 20 ;
  }while (last < 10);
 
  for(int i=0; i<last; i++)
    number[i] = rand() % 10;
  return last;
}
void printout(int number[], int last)
{
  for(int i=0;i<last; i++)
    cout << setw(5) << number[i] ;
  cout << endl;
}