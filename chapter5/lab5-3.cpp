//User input validation with do while loop
//write an example program tha validate user input such that (ch in['A' ... 'Z']) with "do while" statement. if the input character has a validation, print out the character. otherwise, we need to get input until it will ba validated.

#include <iostream>
using namespace std;
int main()
{
  char ch;
  cout << "please input a character between A to Z: "<< endl;
  cin >> ch;
  do 
  {
    cout << "Incorrect input: please input again: " << endl;
    cin >> ch;
  }while((ch <'A') ||(ch > 'Z'));
  cout << "your Input is correct: " << ch << endl;
}
