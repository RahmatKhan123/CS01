//swap flip the element of the array. example[1,2,3,4,5,7,8,] to [8,7,6,5,4,3,2,1]. 1is function.

//2nd function. make the summation of the fold array element, after the array is folded,  ex: [12345]
                      //[54321]



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
 
void    swapfold(int number[], int last) 
{
  for(int i=0; i<last/2; i++) { //this loop iterate till half of the array.
    swap(number[i], number[last-i-1]);// swapt the half iterated elements with other half none iterate element starting from last element of array.
  }
        // for(int i=0, j=last-1; i<j; i++, j--) {  // Works same. but use two variables.
        //  swap(number[i], number[j]);
        // }
}
void sumfold(int number[], int last) //* 10 20 30 40
{
  int sum =0;
  for(int i=0; i<last/2; i++) {
    cout << "the sume of: " << number[i] << "And" << number[last-i-1] << "=" << number[i] += number[last-i-1];
    cout << number[i];
    
  }
  
}
//process the array elements in order to check that two values are the same when the array is folded.
void    equalfold(int number[], int equal[], int last)
{
  for(int i = 0; i < last/2; i++)
  {
    for(int j = 0; j < ((last/2)-i-1); j++)
    {
      if(number[i] == equal[j])
        cout << equal[j];
      else
        cout << equal[j] % 2;
    }
  }
}
 
int     makearray(int   number[])
{
  int last;
  srand(time(NULL));
  do {
    last = rand() % 20 ;
  } while (last < 10);
 
  for(int i=0; i<last; i++)
    number[i] = rand() % 10;
  return last;
}
void    printout(int number[], int last)
{
  for(int i=0;i<last; i++)
    cout << setw(5) << number[i] ;
  cout << endl;
}
