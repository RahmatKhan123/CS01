#include <iostream>
using namespace std;
int main()
{
  
  char input;

  do 
  {
    cout  << "Enter Alphabet" << endl;
    cin >> input;
    if ((input < 'A') && ( input > 'Z'))
    {
      cout << "Wrong input: please try again:" << endl;
      cin >> input;
    }
    
    else
    {
      cout << "you input is" << input << endl;
    }
    
  }
  while ((input >= 'A') && (input <= 'Z'));
}