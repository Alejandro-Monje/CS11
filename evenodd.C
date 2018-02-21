// calculate average from even and odd numbers
#include <iostream>
using namespace std;

int main()
{
  int count = 0;
  int count1 = 0;
  int count2 = 0;
  double avg;
  int  num;
  int total = 0;
  int total2 = 0;

cout << "Enter number:" << endl;
cin >> num;

while(num != 0)
  {
    count++;
    if ( num%2==0)
      {
	count1++;
      cout << "Even" << endl; 
      total = total + num;
      cin >> num;
      }
    else
      { 
        count2++;
	cout << "Odd" << endl;
        total2 = (total2 + num);
	cin >> num;
      }
  }    

if (count > 0)
  {

    avg = (double)(total+total2)/(count1+count2);
  cout <<  count1++ << " Even" << endl;
  cout << count2++ << " Odd" << endl;
  cout << "The average is " << avg << endl;
  }
 else
   cout << "No numbers were entered." << endl;
return 0;
}
