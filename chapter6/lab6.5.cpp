//Write a program that calculate the even and odd summation of the user inputs.
// take the user input until the input is -1;
//if the user input is even, call evensumget(input)
//else call oddsumget(input).

#include <iostream>
using namespace std;

int getoddsum(int input);
int getevensum(int input);

int main()
{
  int input;
  int evensum = 0, oddsum = 0;

  do 
  {
    cout << "Enter your input: " << endl;
    cin >> input;

    if (input == -1)
      break;
    else if (input % 2 == 0)
      evensum = getevensum(input);
    else
      oddsum = getoddsum(input);
  }while(1);

  cout << oddsum << "is the odd summation of the input: " << endl;
  cout << evensum << "is the even summation of the inpout: " << endl;
}

int getoddsum(int odd)
{
  static int osum = 0;
  osum +=odd;

  return osum;
}

int getevensum(int even)
{
  static int esum = 0;
  esum += even;
  return esum;
}


//help