#include <iostream>
using namespace std;
const int SIZE = 5;
void fillArray(int ar[], int SIZE);
void printArray(int ar[], int SIZE);
bool findKey(int ar[], int key, int SIZE);
void sort(int ar[], int SIZE);
int main()
{ 
  int i;
  int key;
  int ar[SIZE];
  fillArray(ar, SIZE);
  printArray(ar, SIZE);
  cout << "Enter a key " << endl;
  cin >> key;
  findKey(ar, key, SIZE);
  if(true)
    cout << "The Key was found in the array " << endl;
  else
    cout << "The Key was not found in the array " << endl;
  sort(ar, SIZE);
  return 0;
}
void fillArray(int ar[], int SIZE)
{

  for(int i = 0; i < SIZE; i++)
    {
      cout << "Enter the number: ";
      cin >> ar[i];
    }
}
void printArray(int ar[], int SIZE)
{
  for(int i = 0; i < SIZE; i++)
    {
      cout << ar[i] << " ";
    }
  cout << endl;
}
bool findKey(int ar[], int key, int SIZE)
{
  for(int i = 0; i < SIZE; i++)
    {
      if(ar[i] == key)
	{
	return true;
	}
      else
	{
       return false;
	}
    }
}
void sort(int ar[], int SIZE)
{
  int start;
  int minI;
  int minV;
  for(start = 0; start < (SIZE - 1); start++)
    {
      minI = start;
      minV = ar[start];
      for(int index = start + 1; index < SIZE; index++)
	{
	  if(ar[index] < minV)
	    {
	      minV = ar[index];
              minI = index;
	    }
	}	
         	ar[minI] = ar[start];
                ar[start] = minV;
    }
  for(int i = 0; i < SIZE; i++)
    {
      cout << ar[i] << " ";
    }
  cout << endl;

}
