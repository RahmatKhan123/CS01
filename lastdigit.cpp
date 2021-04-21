#include <iostream>
#include <fstream>
using namespace std;
void getinput (int &n1, int &n2)
{
  cout << "Enter the first number: " << endl;
  cin >> n1;
  cout << "Enter the second number: " << endl;
  cin >> n2;
}
int isSame (int n1, int n2)
{
  if (n1 == n2)
    return 1;
  return 0;
}
int isGreater(int n1, int n2)
{
  int ln1, ln2;

  ln1 = n1 % 10;
  ln2 = n2 % 10;

	if ( ln1 > ln2)
		return ln1;
	else
		return ln2;
}
void writefile (ofstream &ofs, int div)
{
  ofs << div << endl;
  if (ofs.fail())
  {
    cerr << "File Write Error \n";
    exit(0);
  }
}

int main()
{
	int num1, num2, num3;
	int div;

	ofstream ofs;
	ofs.open("challenge2.txt");
	if (ofs.fail())
	{
		cerr << "File Open Error \n";
		exit(0);
	}
	
	while(1)
	{
		getinput(num1, num2);
		if ( isSame(num1, num2))
			break;
		div = isGreater(num1, num2);
		writefile(ofs, div);
	}


	ofs.close();
}
