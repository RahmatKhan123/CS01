#include <iostream>
using namespace std;
int main()
{
	int x, y, i;

	do
	{
		cout << "Please input two numbers in the range 1 to 100: " << endl;
		cin >> x >> y;
		// x set to user value
		if(x < y)
		{

			if ((x > y) || ((x < 0)) || (y > 100))
			{
				cout << "input again: " << endl;
				cin >> x >> y;
			}
			i = x; // i has been assigned x
			if (i % 2 == 0)
			{
				cout << i << endl;
				i++;
			}
		}
	}while ( i < y);


}