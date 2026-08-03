#include<iostream>
using namespace std;
class Student
{
	public:
		string name;
		int rollno;
		float m1,m2,m3,total,average;
		void getData()
		{
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter Roll number:";
			cin >> rollno;
			cout << "Enter 3 subject of marks:";
			cin >> m1 >> m2 >> m3;
		}
		void calculate()
		{
			total=m1+m2+m3;
			average=total/3;
		}
		void display()
		{
			cout << "Student Details" << endl;
			cout << "Name: " << name << endl;
			cout << "Roll Number: " << rollno << endl;
			cout << "Total Marks:" << total << endl;
			cout << "Average Marks:" << average << endl;
		}
};
int main()
{
	Student s;
	s.getData();
	s.calculate();
	s.display();
	
	return 0;	
}
