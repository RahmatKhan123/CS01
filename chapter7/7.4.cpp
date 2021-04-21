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
  int input;
  // check to see if the user input saved to both array;

  int num3[N];
  srand(time(0));

  makearray(num1, N);
  makearray(num2, N);
  cout << "Enter a number: " << endl;
  cin >> input;

  isSame(num1, N, input);
  isSame(num2, N, input);




}
int isSame(int num[], int N, int input)
{

  for (int i = 0; i < N; i++)
  {
    if(num[i] == input)
  {
      cout << "this array has the user input: " << input << endl;
    if(num[i] == input)
    {

      cout << "this Array also has the user input: " << input << endl;
      break;
    }
  }
  }
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
  
