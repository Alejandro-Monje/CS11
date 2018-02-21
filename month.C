
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()

{
  int month;
  cout << "Enter a month 1 through 12:" << endl;
  cin >> month;

  switch(month)
    {
  case 1:
  case 2:
  case 12: cout << "It is winter" << endl; 
    break;
  case 3:
  case 4:
  case 5: cout << "It is spring" << endl;
    break;
  case 6:
  case 7:
  case 8: cout << "It is summer" << endl;
    break;
  case 9:
  case 10:
  case 11: cout << "It is fall" << endl;
    break;
    default: cout << "The month you have entered is invalid." << endl;
      }
  return 0;
}
