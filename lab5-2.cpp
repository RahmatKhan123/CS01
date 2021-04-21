#include <iostream>
using namespace std;
int main()
//write a program that take user input such that (user input > 0) and (user input < 100). 
//if the user input is not valid, we have to tell input again until it would be valid.
// once the user input is valid, print the user input.
{
  /*int num1;

  cout << "please enter a number greater than 0 less then 100: " << endl;
  cin >> num1;

  while ((num1 <= 0)||(num1 >= 100))
  {
    cout << "you input is not in the range:" << endl;
    cout << " try again:" << endl;
    cin >> num1;
    if ((num1 >= 0) && (num1 <= 100))
    cout << "Good job: your input is:" << num1 << endl;
  }*/
  /*int num1;
  cout << "Please enter anumber between 0 and 100: " << endl; 
  cin >> num1;

  while((num1 < 0) || (num1 > 100))
  {
    cout << "incorrect input: " << endl;
    cout << "try input again " << endl; 
    cin >> num1;
    if ((num1 >= 0) && (num1 <= 100))
    cout << "good job:" << num1 << " is ur input number:";
  }*/
  //this program display a list of numbers and its squars
  /*const int Min = 1, Max =100;
  int num = Min;
  cout << "Enter number number squared\n";
  cout << "-------------------\n";
  while (num <= Max)
  {
    cout << num << "\t\t" << (num * num) << endl;
    num++;
  }*/
  //do while loop

  /*int i = 0;
  do
  {
    cout << i << endl;
    i++;
  }
  while (i <=10);*/

  //while loop
  /*int i = 0;
  while (i <= 10)
  {
    cout << i << endl;
    i++;
  }*/

  //make the part of the program to validate input (0 <input<10)
  //while loop

  /*int i;
  cout << "input a number between 0 and 10:" << endl;
  cin >> i;

  while(i < 0 || i > 10)
  {
    cout << "invalide input. try again:" << endl;
    cin >> i;
  }*/

  //DO WHILE loop

  int i;
  do
  {
    cout << "Enter a number between 0 and 10: " << endl;
    cin >> i;
  }
  while(i <0 || i >10);

}