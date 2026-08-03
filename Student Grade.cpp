/* 
   global variable --> department
   class --> Student                       //Class name must be a noun
   - sid, sname, cgpa --> member variable
   member functions   - display() ---> inner member function(declared and defined inside the class)            // functions must be verb
                      - convertToGrade(cgpa) --> outer member function(declared inside the calss and defined outside the class)
    main()
        - obj
           assign values to member variable
           access member function
*/

#include<iostream>
 
 using namespace std;
 
 char dept[20];
 
 class Student
 {
 	public:
 	int sid;
 	char sname[20];
 	float cgpa;
 	
 	void display()                                     //inner mf
 	{
 		cout << "SID:" << sid << "\t";
 		cout << "SNAME:" << sname << "\t";
 		cout << "CGPA:" << cgpa << "\t";
 		cout << "DEPT:" << ::dept << endl;           //global variable
	}
	char convertToGrade(int cgpa);                          //outer mf
 };
 
char Student::convertToGrade(int cgpa)
{
	if(cgpa>=9)
	    return 'O';
	else if(cgpa >= 8 && cgpa < 9)
	    return 'A';
	else if(cgpa >= 7 && cgpa < 8)
	    return 'B';
	else if(cgpa >= 6 && cgpa < 7)
	    return 'C'; 
	else if(cgpa >=5 && cgpa < 6)
	    return 'D';
	else if(cgpa >=4 && cgpa < 5)
	    return 'E';
	else
	    return 'F';
}

int main()
{
	Student s;
	cout << "Enter sid, sname, cgpa, department: " << endl;
	cin >> s.sid >> s.sname >> s.cgpa >> ::dept;
	s.display();
	cout << "Grade: " << s.convertToGrade(s.cgpa);
	
	return 0;
	
}
