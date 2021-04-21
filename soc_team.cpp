//this program caculate the number of soccer team that a //youth league may create from the number of available //players.
//inpput validation is demostraded with while loop.
#include <iostream>
using namespace std;
int main()
{
  //constand for minimum and maximum players.
  int const min = 9;
  int const max = 15;
  int players, teamPlayer, numteams, leftover;
  //get the number of player per team.
  cout << "How many player do you want per team." << endl;
  cin >> teamPlayer;

  // validate the input.
  while (teamPlayer < min || teamPlayer > max)
  {
    cout << "you should have at least: " << min << " but no more than " << max << "per team:";
    cout << "how many player do wish per team:" << endl;
    cin >> teamPlayer;
  }
  cout << "how many players are available:" << endl;
  cin >> players;
  while (players <= 0)
  {
    cout << "please enter 0 or greater:";
    cin >> players;
  }
  numteams = players / teamPlayer;
  leftover = players % teamPlayer;
  cout << "there will be " << numteams << "teams with" << leftover << "players left over\n";
}
