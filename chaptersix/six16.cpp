#include	<iostream>
using namespace	std;

int	evensumGet(int);
int	oddsumGet(int);

int evensumGet(int even)
{
  static int eSum = 0;
  eSum += even;
  return eSum;
}

int oddsumGet(int odd)
{
  static int oSum = 0;
  oSum += odd;
  return oSum;
}