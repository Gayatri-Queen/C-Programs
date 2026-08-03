#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b, c, d, root1, root2;
    double real, imag;
    cout << "Enter a, b, c: " << endl;
    cin >> a >> b >> c;
    d = b*b-4*a*c;
    if (a == 0) 
    {
          cout << "Roots can't be found" << endl;
          return 0;
    }
    if (d > 0)
    {
         root1 = (-b+sqrt(d))/(2*a);
         root2 = (-b-sqrt(d))/(2*a);
         cout << "Roots are Real and distinct: " << endl;
         cout << "Roots are: " << root1 << " and " << root2;
    }
    else if (d == 0)
    {
        root1 = root2 = (-b)/(2*a);
        cout << "Roots are Real and equal:" << endl;
        cout << "Root1: " << root1 << endl;
        cout << "Root2: " << root2 << endl;
    }
    else
	{
		cout << "Roots are Imaginary: " << endl;
 
		real = -b / (2 * a);
		imag = sqrt(-d) / (2 * a);
 
		cout << "Root1: " << real << "+" << imag << " i " << endl;
		cout << "Root2: " << real << "-" << imag << " i " << endl;
	}
}
 


