#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int readNum(int ar[]);
int main()
{
 
  int ar[][col];
  readNum(ar);
  return 0;
}
int readNum(int ar[])
{
  ifstream inFile;
  int num;
  int i = 0;
  inFile.open("2Dnumbers.txt");
  inFile >> num;
  while(inFile)
    {
      ar[i++] = num;
      cout << num << endl;
      inFile >> num;
    }
  inFile.close();
  return i;
}
