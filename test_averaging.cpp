//this program average the test scores. it asks the user 
//for the number of students and the number of test scores per students.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int numStudents, numtest;// number of stu and test per stu
  double total, average;// accumulator for total scores and average test scores.
  //get number of students
  cout << "this program average test score: ";
  cout << "for how many students do you have test scores:" << endl;
  cin >> numStudents;
  // get the number of test scores per students;
  cout << "how many test score does each student have? ";
  cin >> numtest;
  for (int student; student < numStudents; student++)
  {
    total = 0;
    for (int test = 1; test < numtest; test++)
    {
      double score;
      cout << "enter test score:" << test << "for student: " << student << endl;
      cin >> score;
      total += score;
    }
    average = total / numtest;
    cout << "the average score for the student is: " << student << " is: " << average << endl;
  }
}