//
#include <iostream>
using namespace std;

  void showInfo();
  void findLargest(int num1, int num2, int num3);

  int main()
  {
    int num1;
    int num2;
    int num3;
    showInfo();
    cout << "Enter three numbers in the same row" << endl;
      cin >> num1;
      cin >> num2;
      cin >> num3;
      findLargest(num1, num2, num3);
      return 0;
  }
  void showInfo()
  {
    cout << "This program will ask for three numbers and ouput the largest number" << endl;
  }
  void findLargest(int num1, int num2, int num3)
    {
    
      if( num1 > num2 && num1 > num3)
        cout << "The largest number is " << num1 << endl;
      else if( num2 > num1 && num2 > num3)
		 cout << "The largest number is " << num2 << endl;
      else if( num3 > num1 && num3 > num2)
                 cout << "The largest number is " << num3 << endl;
    }


