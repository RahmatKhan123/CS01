// make a program that calcultes the scores of students. it ask the user for the number of students and number of score for students.
#include <iostream>
using namespace std;
int main()
{
  int scores;
  int numstudent, numscores;
  int i = 0, j = 0; 
  string stuname;
  float average,sum = 0;

  cout << " enter #student and #score: " << endl;
  cin >> numstudent >> numscores;

  if (numstudent <0 || numscores < 0)
  {
    cout << "Enter correct number of student and score: " << endl;
    cin >> numstudent >> numscores;
  }
  for (i = 0; i < numstudent; i++)
  {
    cout << "Enter student name: " << endl;
    cin >> stuname;
    cout << "student name is: " << stuname << endl;

  }
  for (j = 0; j < numscores; j++)
  {
    cout << "Enter student score: " << endl;
    cin >> scores;
    cout << "score " << j + 1 << " : " << scores << endl;
    sum += scores;
  }
  average = sum/numscores;
  cout << "sum of score is: " << sum << endl;
  cout << "average is : " << average << endl;
}
