/****************************************************/
/*Implemeted by; Alejandro Monje ********************/
/*Date: 11/22/15*************************************/
/*pupose: The purpose of the program is to display the a table with the players name number and score and also show the total points and also the person who got the highest*/
/*User information: The user will enter the players name, the players number, and the players points*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct player
{
  string name;
  int num;
  int points;
};
const int big = 12;
void getPlayerinfo(player &p);
void showInfo(player p);
int getTotal(player team[], int big);
void getHigest(player team[], int big);
int main()
{
  int total;
  int k;
  player team[big];
  player p;

  for(int i = 0; i < big; i++)
    {
      getPlayerinfo(p);
      team[i] = p;
      cin.ignore();
    }
  for(int i = 0; i < 12; i++)
	{
	  showInfo(team[i]);
	}

  total = getTotal(team, big);
  getHigest(team, big);

  return 0;
}
void getPlayerinfo(player &p)
{     do
    {
      cout << "Enter the player name:" << endl;
      cin >> p.name;
      cout << "Enter the player number:" << endl;
      cin >> p.num;
      cout << "Enter Player points:" << endl;
      cin >> p.points;      
      if(p.num < 0 || p.points < 0) 
	{
        cout << "you have entered invalid numnbers please re enter" << endl;
	}
    }while(p.num < 0 || p.points < 0);      
}
int getTotal(player team[], int big)
{
  big = 12;
  int total;
  total = 0;
  for(int i = 0; i < big; i++)
    {
      total += team[i].points;
    }
  cout << "The total points is " << total << endl;
  return total;
}
void getHigest(player team[], int big)
{ 
  big = 12;
  int i;
  int k;
  int plus;
  k = 0;
  k = team[0].points;
  for(i = 0; i < big; i++)
    {
      if(team[i].points > k)
	k = team[i].points;
      plus = i;
    }
  cout << "Player " << team[plus].name << " has the # " << team[plus].num << " And has the highest points" << endl;
}
void showInfo(player p)
{
      cout << "Players name " << "# " << " points" << endl;
      cout << " " << left << setw(15) << p.name << left << setw(3) << p.num << left << setw(10) << p.points << endl;   
}
