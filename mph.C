// This is for extra practice. 
#include <iostream>
using namespace std;

int main()
{
  const double meter = 1609;
   const double seconds = 3600;
   int  mps;
   int mph;
   cout << "What is the miles per hour? " << endl;
   cin >> mph;
   int m = mph * meter;
   mps = (m/seconds) + .5; 
   cout << "The meters per second is " <<(double) mps << endl;
   return 0;
}
   
