// this program calculate the total number of point
//a soccer team has earned over a serous of games.
// the user enter a serous of value, then -1 when finished
#include <iostream>
using namespace std;
int main()
{
  int game, points, total = 0;
  cout << "enter the points your team has earned:";
  cout << "so far in the season, then enter -1 when finished: " << endl;
  cout << "enter the points for game: " << game << endl;
  cin >> points;
  while (points != -1)
  {
      total += points;
      game++;
      cout << "enter the points for the game: " << game << ": ";
      cin >> points;

  }
  cout << "the total points are : " << total << endl;

}