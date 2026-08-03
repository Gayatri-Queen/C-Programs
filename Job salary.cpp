#include<iostream>
using namespace std;
class Employee
{
	private:
		int empID;
		string name;
		float basicSalary, bonus, totalSalary;
	public:
		void getData()
		{
			cout << "Enter Employee ID:";
			cin >> empID;
			cout << "Enter name:";
			cin >> name;
			cout << "Enter Basic Salary:";
			cin >> basicSalary;
			cout << "Enter Bonus:";
			cin >> bonus;
		}
		void calculateSalary()
		{
			totalSalary = basicSalary + bonus;
		}
		void display()
		{
			cout << "Employee Salary Details" << endl;
			cout << "Employee Details:" << empID << endl;
			cout << "Name: " << name << endl;
			cout << "Basic Salary:" << basicSalary << endl;
			cout << "Bonus: " << bonus << endl;
			cout << "Total Salary:" << totalSalary << endl;
		}
};
int main()
{
	Employee emp;
	emp.getData();
	emp.calculateSalary();
	emp.display();
	
	return 0;
}
