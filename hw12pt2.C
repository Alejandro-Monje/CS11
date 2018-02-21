/******************************************************/
/*purpose: The program will be displaying the are, raduis, diameter, and also the circumference*/
/*Implemted by: Alejandro Monje*/
/*Date: 12/7/15*/
/*User information: The user is going to have to enter the radius*/
/*overview: consists of main and circle class8/
/*****************************************************/
#include <iostream>

#include <iostream>
using namespace std;

class circle
{
private:
  double radius;
  double pi;
public:
  circle();
  circle(double r);
  void setRadius(double nerR);
  double getRadius();
  double getArea();
  double getDiameter();
  double getCircumference();
};

circle::circle()
{
  radius = 0.0;
  pi = 3.14;
} 

circle::circle(double r)
{
  radius = r;
  pi = 3.14;
}

void circle::setRadius(double newR)
{
  radius = newR;
}

double circle::getRadius()
{
  return radius;
}

double circle::getArea()
{
  return pi*radius*radius;
}

double circle::getDiameter()
{
  return radius * 2;
}

double circle::getCircumference()
{
  return 2 * pi * radius;
}
int main()
{
  circle c1; // calling the default constructor
  double a;
  cout << "Enter the radius: " << endl;
  cin >> a;
  c1.setRadius(a);

  cout << "The circle's radius is " << c1.getRadius() << endl;

  cout << "The circle's Area is " << c1.getArea() << endl;

  cout << "The circle's diameter is " << c1.getDiameter() << endl;

  cout << "The circle's circumference is " << c1.getCircumference() << endl; 
  return 0;
}
