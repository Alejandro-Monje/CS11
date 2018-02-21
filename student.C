//
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main()
{

  int num;
  int total1 = 0;
  int total2 = 0;
  int total3 = 0;
  int test1;
  int test2;
  int test3;
  string name1;
  string name2;
  int count = 0;
  ifstream inFile;
  ofstream outFile;
  inFile.open("student.dat");
  outFile.open("studentend.dat");
  
  if ( !inFile)
    {
      cout << "File does not exist." << endl;
    }
  else
    {
      inFile >> name1 >> name2 >> test1 >> test2 >> test3;  
      while( inFile)
	{
	  //inFile >> num;
          total1 += test1;
          total2 += test2;
          total3 += test3;
	  inFile >> name1 >> name2 >> test1 >> test2 >> test3;
	  count++;
        }  

          if(count != 0)
            {

              outFile << " The average for test 1 " << fixed << setprecision(3) << float(total1)/count << endl;
	      outFile << " The average for test 2 " << fixed << setprecision(3) << float(total2)/count << endl;
	      outFile << " the average for test 3 " << fixed << setprecision(3) << float(total3)/count << endl;

            }
          else
            {
              outFile << "studentend.dat";
              cout << "There is nothing in the file." << endl;
              outFile.close();
            }
	
    }
     
    
  return 0;
}

