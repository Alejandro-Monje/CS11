/***********************************************************************************************************************************************************************************/
/*Implemented by; Alejandro Monje *************************************************************************************************************************************************/
/*Date: 10/25/17 *******************************************************************************************************************************************************************/
/*Purpose: The program will display ask for the score of the five judges and it will drop the lowest and highest scores. Then it will calculate the average of the remainng scores.*/
/*User Information:The user will input for the five scores**************************************************************************************************************************/ 
/***********************************************************************************************************************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void getGudgeData(double& num1, double& num2, double& num3, double& num4, double& num5);
void calcScore(double avg, double total, double& droppedhi, double& droppedlo, double& num1, double& num2, double& num3, double& num4, double& num5);
double findLowest(double& droppedlo, double num1, double num2, double num3, double num4, double num5);
double findHighest(double& droppedhi, double num1, double num2, double num3, double num4, double num5);
int main()
{
  double num1;
  double num2;
  double num3;
  double num4;
  double num5;
  double total = 0;
  double droppedhi;
  double droppedlo;
  double avg = 0;
  getGudgeData( num1, num2, num3, num4, num5);
  calcScore( avg, total, droppedhi, droppedlo, num1, num2, num3, num4, num5);
  return 0;
}
void getGudgeData( double& num1, double& num2, double& num3, double& num4, double& num5)
{ 
  do
    {
  cout << "Enter The Score from first gudge that are between 0 and 10: " << endl;
  cin >> num1;
  cout << "Enter The Score from second gudge that is between 0 and 10: " << endl;
  cin >> num2;
  cout << "Enter The Score from third gudge that is between 0 and 10: " << endl;
  cin >> num3;
  cout << "Enter The Score from fourth gudge that is between 0 and 10: " << endl;
  cin >> num4;
  cout << "Enter The Score from fifth gudge that is between 0 and 10: " << endl;
  cin >> num5;
  if (num1 < 0 || num1 > 10 || num2 < 0 || num2 > 10 || num3 < 0 || num3 > 10 || num4 < 0 || num4 > 10 || num5 < 0 || num5 > 10)
    cout << "You have entered invalid numbers please re-enter your numbers." << endl;
    }
  while(num1 < 0 || num1 > 10 || num2 < 0 || num2 > 10 || num3 < 0 || num3 > 10 || num4 < 0 || num4 > 10 || num5 < 0 || num5 > 10);
  
      
}
void calcScore(double avg, double total, double& droppedhi, double& droppedlo, double& num1, double& num2, double& num3, double& num4, double& num5)
{
  
  total = num1 + num2 + num3 + num4 + num5;
  findHighest(droppedhi, num1, num2, num3, num4, num5);
  findLowest(droppedlo,  num1, num2, num3, num4, num5);
  avg = (total - (droppedhi + droppedlo))/3;
  cout << fixed << setprecision(2) << "The final score is " << avg << endl;

}
double findHighest( double& droppedhi, double num1, double num2, double num3, double num4, double num5)
  {        
    droppedhi = 0;
   
  if(num1 > droppedhi)
     droppedhi = num1;   
  if (num2 > droppedhi)
    droppedhi = num2;
  if (num3 > droppedhi)
    droppedhi = num3;
  if (num4 > droppedhi)
    droppedhi = num4;
  if (num5 > droppedhi)
    droppedhi = num5;
      return droppedhi;
	
  }
double findLowest(double& droppedlo, double num1, double num2, double num3, double num4, double num5)
 {
  
    droppedlo = 10;
 
  if (num1 < droppedlo)
   droppedlo = num1;
  if (num2 < droppedlo)
    droppedlo = num2;
  if (num3 < droppedlo)
    droppedlo = num3;
  if (num4 < droppedlo)
    droppedlo = num4;
  if (num5 < droppedlo)
    droppedlo = num5;
  return  droppedlo;
 }




