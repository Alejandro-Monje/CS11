#include <iostream>
#include <iomanip>
using namespace std;

const int student = 5;
const int test = 3;

void fillArray(int scores[][test]);
void printArray(const int scores[][test]);

int main()
{
  int scores[student][test];

  fillArray(scores);
  printArray(scores);
 
  return 0;
}

void fillArray(int scores[][test])
{
 
  for(int te = 0; te < test; te++)
    {
      cout << "Enter the score for test#" << te + 1 << endl;
      for(int stu = 0; stu < student; stu++)
      {
	cout << "Student#" << stu + 1 << ":";
	cin >> scores[stu][te];
      }
    }
}
void printArray(const int scores[][test])
{
  int total = 0;
  int  num = 0;
  
  cout << endl <<  setw(12) << "Test#" << setw(12) << " Stu1" << setw(12) << " Stu2" << setw(12) << " Stu3" << setw(12) << " Stu4" << setw(12) << " Stu5" << setw(12) << "  average" << endl;
  for(int te = 0; te < test; te++)
    {
      cout << setw(12) << te + 1;
      for(int stu = 0; stu < student; stu++)
	{
	  cout << setw(12) << scores[stu][te];
	  total += scores[stu][te];
	}
      cout << setw(12) << fixed << setprecision(2) << (double)total/student << endl;
      total = 0;      
    }
  
  cout << setw(12) << "Average";
  for(int stu = 0; stu < student; stu++)
    {
      for(int te = 0; te < test; te++)	
	  num += scores[stu][te];

	  cout << setw(12) << (double)num/test;
	  num = 0;	
    }
  cout << endl;
}


