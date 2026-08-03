#include<iostream>
using namespace std;
int value = 100; 
namespace Data
{
    int value = 200;
}
int main()
{
    int value = 300;   
    cout << "Local variable: " << value << endl;
    cout << "Global variable: " << ::value << endl;
    cout << "Namespace variable: " << Data::value << endl;
    return 0;
}

