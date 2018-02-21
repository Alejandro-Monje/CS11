#include <iostream>
using namespace std;

int main()
{
  int n1, n2, n3, n4, largest;

  cout << "enter the four numbers: " << endl;
  cin >> n1 >> n2 >> n3 >> n4;

  if( n1 > n2)
    largest = n1;
  else 
    largest = n2;
  if ( n3 > largest)
    largest = n3;
  if ( n4 > largest) 
    largest = n4;
  cout <<"The largest number is " << largest << endl;
  return 0;
}

