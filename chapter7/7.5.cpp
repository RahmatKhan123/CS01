#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int makearray(int [], int);
int isSame(int[], int, int);

int main()
{

  const int N =10;
  int num1[N];
  int num2[N];
  //int input;
  int count = 0;
  // to check the Duplicated numbers in the arrays indexes of two arrays: and print out how many duplicated number is there.

  srand(time(0));

  makearray(num1, N);
  makearray(num2, N);
  for (int v2 = 0; v2 < N; v2++)
  {
    for (int v1 = 0; v1 < N; v1++)
    {
      if(num1[v1] == num2[v2])
      {
        count+=1;
        break;
      }
    }
    cout << "num1: " << num1[v2] << " " << count << endl;
  }

  cout << "Dupilicated number is: " << count << endl;




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
  
