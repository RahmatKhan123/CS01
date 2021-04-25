/*#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

 int makearray(int [], int);

int main()
{

  // find min and max value of the array. 
  // find the sum and average:
  /*const int N = 10;
  int num1[N]= {0,1,2,3,4,5,6,7,8,9};
  int sum;
  double avg;

  for(int i = 0; i < N; i++)
  {
    sum += num1[i];
  }
  avg = sum/N;
  cout << avg << "  is the average" << endl;*/

  /*const int N = 10;
  int num1[N]= {0,1,2,3,4,5,6,7,8,9};
  int num2[N] = {9,8,7,6,5,4,3,2,1,0};
      // summation of each index element of each array
      // ex: index 0 of 1st array add to index0 of 2nd array 
      // and save them to a third array:
      //       9,9,9,9,9,9,9,9,9,9,9,

  int num3[N]; // 9,9,9,9,9,9,9,9,9
  int sum = 0;

  for (int i = 0; i < N; i++)
  {
    num3[i] = num1[i] + num2[i];
    //sum = num1[i] + num2[i];
    //num3[i] = sum;            // this and
    //cout << sum << endl; /// this is the same as
  }

  for (int v : num3) // range base for loop here.
    cout << v << endl;
    */


/*
  const int N =10;
  int num1[N]= {0,1,2,3,4,5,6,7,8,9};
  int num2[N] = {9,8,7,6,5,4,3,2,1,0};

  int num3[N];

  for (int i = 0; i < N; i++)
  {
    if(num1[i] < num2[i])
      num3[i] = num2[i];
    else 
      num3[i] = num1[i];
  }
  for (int v : num3)
    cout << v << endl;


  const int N =10;
  int num1[N];
  int num2[N];

  int num3[N];
  srand(time(0));


  for (int i = 0; i < N; i++)
  {
    num1[i] = rand() % 10;
    num3[i] = rand() % 10;
  }
  for (int v : num1)
    cout << v << endl;
  for (int v : num2)
    cout << v << endl;

  for (int i = 0; i < N; i++)
  {
    if(num1[i] < num2[i])
      num3[i] = num2[i];
    else 
      num3[i] = num1[i];
  }
  for (int v : num3)
    cout << v << endl;



const int N =10;
  int num1[N];
  int num2[N];

  int num3[N];
  srand(time(0));

  makearray(num1, N);
  makearray(num2, N);


  
  for (int i = 0; i < N; i++)
  {
    if(num1[i] < num2[i])
      num3[i] = num2[i];
    else 
      num3[i] = num1[i];
  }
  for (int v : num3)
    cout << v << endl;

}

int makearray(int n[], int SIZE)
{
  for (int i = 0; i < SIZE; i++)
  {
    n[i] = rand() % 10;
    cout << n[i] << "\t";
  }
  cout << endl;
  
}
*/





