#include <iostream>
#include <string>
using namespace std;

class person {
    string name;
    int age;
    string address;

public:
    person(string n, int a, string ad) : name(n), age(a), address(ad) {}

    void display() {
        cout << "Name: " << name
             << " Age: " << age
             << " Address: " << address << endl;
    }
};

class student : public person {
    int rollNo;
    int grade;

public:
    student(string n, int a, string ad, int rn, int per)
        : person(n, a, ad), rollNo(rn), grade(per) {}

    void displayCalculateCgpa() {
        display(); 
        cout << "Roll No: " << rollNo
             << " Grade: " << grade << endl;
    }
};

int main() {
    student s("Maheswari", 20, "thatipaka ", 101, 9);
    s.displayCalculateCgpa();
    return 0;
}
