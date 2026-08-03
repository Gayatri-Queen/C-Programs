#include<iostream>
using namespace std;
class Voter
{
	public:
		string name;
		int age;
		void getData()
		{
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter age: ";
			cin >> age;
		}
		void checkEligibilty()
		{
			if(age>=18)
			{
				cout << name << " is eligible to vote." << endl;
			}
			else
			{
				cout << name << " is not eligible to vote." << endl;
			}
		}
};
int main()
{
	Voter v;
	v.getData();
	v.checkEligibilty();
	
	return 0;
}
