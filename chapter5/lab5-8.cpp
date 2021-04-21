//write a program that finds the sequence of 2 to power n in a given range. e.g if the user input is 1000 get the sequence of 2 to the power n between 0 to 1000.
// range(0 to 1000)1,4,8,16,32,64,128,256,512

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int begin, end;
  int i, j;
  int power;

  cout << "Input numbergreater than zero: " << endl;
  cin >> begin >> end;
  i = 0;
  power = 1;
  do 
  {
    power*=2;
    i +=1;

  }
  while (power < begin);


  while (power < end)
  {
    cout << "2**" << i << " --- " << power << endl;
    power *= 2;
    i++;
  }
}
  /*if((begin < 0) || (end > 1300))
  {
    cout << "Please Input the number greater than zero: " << endl;
    cin >> begin >> end;
  }
  if ((begin >0) && (end <= 1300))
    for ( i = begin; i < end; i *= pow(2,i))
    cout << (power * pow(2,i)) << endl;*/

