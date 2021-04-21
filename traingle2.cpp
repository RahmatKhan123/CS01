#include <iostream>
using namespace std;
int main()
{

  int N=3;
  int i, j;

  for (i = 0; i<N; i++)
  {
    for (j = 0; j <= N-i-1; j++)
      cout << "(" << i << " " << j << ") " ;
    cout << endl;

  }
}