#include<iostream>
#include<string>
using namespace std;

class Sports
{
	public:
	string name;
	int numplayers;
	static int count;
	
	Sports()                 //Default constructor
	{
		name = "No Sport";
		numplayers = 0;
	}
	
	Sports(string n, int np )          //Parameterized constructor
	{
		name = n;
		numplayers = np;
	}
	
	Sports(Sports &sobj)                //copy constructor
	{
		name = sobj.name;
		numplayers= sobj.numplayers;
	}
	
	static int dispCount()
	{
		return ++count;
	}
	
	void dispInfo()
	{
		cout << "Name:" << name << endl;
	    cout << "No.of Players:" << numplayers << endl;
	}
	
	string getSportsName()
	{
		return name;
	}
	
	int getNumPlayers()
	{
		return numplayers;
	}
};

int Sports::count=0;
int main()
{
	Sports sp;
	
	Sports sp1("Cricket",11);
    Sports sp2("VolleyBall",6);
	Sports sp3("Kabaddi",7);
	Sports sp4(sp3);
	
	Sports s[] = {sp, sp1, sp2, sp3, sp4};
	
	for(int i=0; i<5; i++)
	{
		cout << "Sports count: " << Sports::dispCount << endl;
		s[i].dispInfo();
		cout << "Sports Name:" << s[i].getSportsName() << endl;
	    cout << "No.of players:" << s[i].getNumPlayers() << endl;
	}
	
	/*sp1.setValues("Cricket",11);
	sp2.setValues("VolleyBall",6);
	sp3.setValues("Kabaddi",7);
	
	sp.dispInfo();
	sp1.dispInfo();
	sp2.dispInfo();
	sp3.dispInfo();
	
	cout << " Sports Name:" << sp1.getSportsName() << endl;
	cout << "No.of players:" << sp1.getNumPlayers() << endl;
	
	cout << "Sports Name:" << sp2.getSportsName() << endl;
	cout << "No.of players:" << sp2.getNumPlayers() << endl;
	
	cout << "Sports Name:" << sp3.getSportsName() << endl;
	cout << "No.of players:" << sp3.getNumPlayers() << endl;*/
	
	return 0;
}
