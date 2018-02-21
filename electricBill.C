
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
 int month;
 int currentMeter;
 int previousMeter;
 int total;
 double totalM;
 double totalM1;
 double totalM2;
 double KWHO;
 const double RATECOST = 8.50;
 const double Ratecost2 = .07525;
 const double Ratecost3 = .06575;

 
 cout << "Enter The month" <<endl;
 cin >> month;
   
 if ( month < 1 || month > 12)
   cout << "Bad month" << endl; 
 else 
   {
cout << "Month is good" << endl;
   
cout << "Enter the current meter reading: " << endl;
cin >> currentMeter; 
cout << "Enter the previous meter reading: " << endl;
cin >> previousMeter;
   
 if (currentMeter < 0 || previousMeter < 0)
   cout << " reading should not be negative." << endl;
 else if ( currentMeter < previousMeter)
   cout << "Previous reading should not be larger than the current reading." << endl; 
 else 
   {
     cout << "reading is good" << endl;
   
 // calculations 
     total = currentMeter - previousMeter;
     totalM = RATECOST;
      KWHO = total - 400;
    totalM1 = RATECOST + (Ratecost2 * KWHO);
    totalM2 = RATECOST + (Ratecost3 * KWHO);

    if (total <= 400 && total >=0)
       {
      cout << setprecision(2) << fixed << "Amount consumed " << total << " Amount that is due " << "$" << totalM << endl;
       }
    else if (total  > 400 && (month >= 5 && month <= 9))
       {
	 cout << setprecision(2) << fixed << "Amount consusmed " << total << " Amount that is due " << "$" << totalM1 << endl;
       }
    else
       cout << setprecision(2) << fixed << "Amount consusmed " << total << " Amount that is due " << "$" << totalM2 << endl;
   }
   }  
     return 0;
}
   
