#include <iostream>
#include <fstream>// 1)header file stream
using namespace std;
int main()
{
  ofstream ofs; //creating the file stream object like varaible decleration:
  int N;
  int rdnum, num;
  unsigned seed = time(0);
  srand(seed);
  cout << "Enter the number of randon number: ";
  cin >> N;
  ofs.open("data.txt");
  if (ofs.fail())
      cerr << "File open Error!";
      exit(0);
  //while (N >0)
  ofs << N;
  cout << "Total number of line" << N << endl;
  for (int i = 0; i < N; i++)
  {
    cout << num << "was read from the file\n";
  }
  ofs << N << endl;
  for (int i = 0; i < N; i++)
  {
    rdnum = rand() % 100;
    ofs << rdnum << endl;// open the file.
    if (! ofs.fail())
        cout << rdnum << "has written to the file:\n";
  }
  ofs.close();//close file.
  //int num;
  //char c;
  //num = 3;
  //c = 'A';
  //ofs << num;

}