// calculate average from even and odd numbers
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

  int days;
  int count;
  double total = 0;
  double pay = .01;
   do 
     {
       cout << " Enter the number of days that you have worked: " << endl;
       cin >> days;
      
       if (days <= 0)
         cout << days << " is an invalid number of days worked. \n " << endl;
     }while(days <= 0);
     
   for (count = 1; count <= days; count++)
     {
       cout << setw(5) << count << setw(10) << pay << endl;
       total += pay;
       pay = pay * 2; 
     }
  
   cout << "Total" << setw(10)<< total << endl;
       total += pay;
   return 0;
}
