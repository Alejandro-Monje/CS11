#include <iostream>
#include <string>
#include <ifstream>
using namespace std;

int openInputFile(int arr[]);
void swapNumInArr(int arr[], int numInArr);
void printArr(int arr[], int numInArr);

int main()
{
  const int MAX_NUM = 20;
  int arr[MAX_NUM];
  int numInArr;
 
  numInArr = openInputFile(arr);
  swapNumInArr(arr, numInArr);
  printArr(arr, numInArr);
 
  return 0;
}

??? openInputFile(int arr[])
{
  //this function gets input file and puts it 
  //into an array. also gets number of 
  //numbers in file
    
  int count = 0;
  ifstream inFile;
    inFile.open("Numbers.txt");
    
    if(!inFile)
      {
        cout << "File Not Found!" << endl;
        return 0;
      }
    else
      {
        while(inFile >> arr[count])
	  {
            count++;
	  }
      }
    
    inFile.close();
    return 0;
}

void swapNumInArr(int arr[], int numInArr)
{
  //create the swap array code here
  int a;
  int a2;
  int i = 0;
  for(i; i < numInArr; i++)
    {
   if
     {
      
}

void printArr(int arr[], int numInArr)
{
  //prints array onto screen
    
  for(int i = 0; i < numInArr; i++)
    {
      cout << arr[i] << " ";
    }
  cout << endl;
}
