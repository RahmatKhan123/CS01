#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream  ifs;
  int num;
  ifs.open("data.txt");
  //for (int i = 0; i < 5; i++)// or we can use an infinit loop since we dont know how many exact line there are in the file.
  if (ifs.fail())
  {
    cerr << "file open Error";
    exit (0);
  }
  ifs >> num;
  cout << "Total number of line" << num << endl;
  for (int i = 0; i < num; i++)
  {
    cout << num << "was read from the file\n";
  }
  //while (ifs >> num)
  //{
    //cout << num << " Was read from the file\n";
  //})
  //for(;;)
  //{
      //ifs >> num;
     //if (ifs.eof()) // so the last line not be repeated //read.

         // break;
      //cout << num << " was read from the file\n";
  //}
  ifs.close();

}