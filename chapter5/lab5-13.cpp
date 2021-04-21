// write a program that prints index[i,j] with the right 90 degree taingle.
// by using nested for loop
#include <iostream>
using namespace std;
int main()
{
  //int N = 3;
  int i, j;
  for (i = 0; i <= 3; i++)
  {
    for(j = 0; j <= i-1; j++)
      cout << i << j << endl;
  cout << endl;
  }
  /*
   int N=3;
  int i, j;

  for (i = 0; i<N; i++)
  {
    for (j = 0; j <= i; j++)
      cout << "(" << i << " " << j << ") " ;
    cout << endl;
  }
  int N=3;
  int i, j;

  for (i = 0; i<N; i++)
  {
    for (j = 0; j <= N-i-1; j++)
      cout << "(" << i << " " << j << ") " ;
    cout << endl; 

  }
    */

}