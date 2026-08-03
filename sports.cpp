#include<iostream>
#include<string>
using namespace std;
class Sports
{
	public:
	string name;
	int numplayers;
	
	void dispInfo()                     //Display information
	{
		cout << "Name: " << name << endl;
	    cout << "No.of Players: " << numplayers << endl;
	}
	
	string getSportsName()
	{
		return name;
	}
	
	int getNumPlayers();
};

Sports sp;

int Sports::getNumPlayers()
{
	return sp.numplayers;
}
int main()
{
	sp.name = "Cricket";
	sp.numplayers = 11;
	sp.dispInfo();
	sp.getNumPlayers();
	sp.getSportsName();
	
	cout << "No.of players:" << sp.getNumPlayers() << endl;
	cout << "Name:" << sp.getSportsName() << endl;
	
	return 0;
}
