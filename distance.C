// distance
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double point1x;
  double point1y;
  double point2x;
  double point2y;
  double distance;
  double length1;
  double length2;

  cout << "Enter the x value of first point: " << endl;
  cin >> point1x;
  cout << "Enter the y value of first point: " << endl;
  cin >> point1y;
  cout << "Enter the x value of second point: " << endl;
  cin >> point2x;
  cout << "Enter the y value of second point: " << endl;
  cin >> point2y;

  //Calulations

  length1 = point2x - point1x;
  length2 = point2y - point1y; 
  distance = sqrt(pow(length1,2) + pow(length2,2));

  cout << "The distance is: " << distance << endl;

  return 0;
}




