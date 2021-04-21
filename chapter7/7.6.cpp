#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

//Nul Character

int main()
// to find out to check see if one character exist in a string.
{
  /*char name[] = "progamming\0";
  char name2[] = "ABC";
  char key = 'e';

  cout << sizeof(name) << endl;
  cout << sizeof(name2) << endl;
  cout << strlen(name2) << endl;

  for(int i = 0; i <strlen(name); i++)
  {
    if(name[i] == key)
    {
      cout << "Found Key in " << Key << "at index" << i << endl;
    }
    */






    // find how many vowels are there in a string and at what index.56
  char name[] = "progamming\0";
  char vowels[] = "aeiou";

  for (int i = 0; i <strlen(name); i++)
  {
    for (int j = 0;j < strlen(vowels); j++)
    {
      if (name[i] == vowels[j])
      {
        cout << "found the vowels: " << vowels << " at the index: " << i << endl;
      }
    }
  }
  
  }