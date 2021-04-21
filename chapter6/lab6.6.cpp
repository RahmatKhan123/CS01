//Make a program that find prime numbers acoording to two user inputs[begin, end].
//begin and end must be positive integers.
//if begin == end, getlisprime(int) function is called with defualt agruement [begin, 100]
//if begin > end, getlistprime() function called with defualt argument [0,100]
//if begin < end, getlistprime(int, int) function is called with the range from begin to end.

//EX: user input = 20,20 call getlistprime(20) // the second parameter is defualt.
//user input = 40,20: call getlistprime()//both parameter are defualt.

// user input = 20,50 call getlistprime(20,50) //call the function with actual agruements.
#include <iostream>
using namespace std;
void getlistprime(int begin, int end);
int main()
{
  int num, i;
  int begin, end;

  cout << "Input 1st number: " << endl;
  cin >> begin;
  cout << "Input 2nd number: " << endl;
  cin >> end;
  getlistprime(begin, end);
}

void getlistprime(int begin, int end)
{
  int num, i;
  num = begin;
  while (num <= end)
  {
    for (i = 0; i < num; i++)
    {
      if( num % i == 0)
        break;
    }
    if (!(i != num))
      cout << "the prime number is : " << num << endl;
    num++;
  }
}

// help

