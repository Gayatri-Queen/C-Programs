#include <iostream>
using namespace std;

class Student {
private:
    int marks;
protected:
    int rollNo;

public:
    void setData(int r, int m = 90)
    {
        rollNo = r;
        marks = m;
    }
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    Student s;
    s.setData(101);
    s.display();

    return 0;
}

