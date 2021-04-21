//this program average 3 test score. it repeates as many
//time the user wishes.
#include <iostream>
using namespace std;
int main()
{
  int score1, score2, score3;
  double average;
  char again;

  do
  {
    //get 3 score
    cout << "enter 3 score: i wil average them for you\n";
    cin >> score1 >> score2 >> score3;
    // calculate the 3 score average
    average = ( score1 + score2 + score3) / 3.0;
    cout << "the average is: " << average << endl;
    cout << " do you want to average another set? (y/n) ";
    cin >> again;

  }
  while (again == 'y' || again == 'Y');
  return 0;
}