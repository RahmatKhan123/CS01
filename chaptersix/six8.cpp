#include <iostream>
using namespace std;
// jan and ronan
void primenumber ( int, int );

int main()
{
  int num, i;
  int b,e;
  int prime_number;

  cout << "Enter a starting value: " << endl;
  cin >> b;

  cout << "Enter an ending value: " << endl;
  cin >> e;

  cout << "The prime numbers between " << b << " and " << e << " are: " << endl;
  
  primenumber( b, e );
}

void primenumber( int b, int e )
{
  int i, num;

  num = b;

  while ( num <= e )
  {
    for ( i = 2; i < num; i++ )
    {
      if ( num % i == 0 )
        break;
    }
    if ( !(i != num) )
      cout << num << " is a prime number." << endl;
    num++;    
  }
}
