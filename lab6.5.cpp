#include <iostream>
using namespace std;

double areaWH( int w = 1, int h = 1);

int main
(
  int width, height;
  double area;

  width = 100;
  height = 10;

  area = areaWH(width, height);
  cout << "area " << area << endl;

)
doublw areaHW(int w, int h)
{
  double area;
  area = w * h;
  return area;
}
