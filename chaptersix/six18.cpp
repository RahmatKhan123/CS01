#include <iostream>
using namespace std;

void powernumbers(int base, int exponent)
{
	int i;
	int nthPower=1;
	for (i = 1; i<=exponent; i++) {      
		nthPower *= base;
		cout << "power of " << i << ": " << nthPower << endl;
	}
}