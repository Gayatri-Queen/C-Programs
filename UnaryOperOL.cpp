#include<iostream>
using namespace std;

class UnaryOperOL
{
	int num;
	
	public:
	UnaryOperOL(int n)
	{
		num = n;
	}
	
	UnaryOperOL operator ++()                // 1.UnaryOperOL(++num)
	{                            
		return ++num;                 
	}
	
	void display()
	{
		cout << "Number: " << num << endl;
	}
};

class BinaryOperOL
{
	int num;
	
	public:
	BinaryOperOL(int num) : num(num) {	}
	
	void display()
	{
		cout << "Num: " << num << endl;
	}
	
	BinaryOperOL operator + (BinaryOperOL obj)
	{
		return BinaryOperOL(this->num + obj.num);
	}
};

class ComplexNum
{
	int real, imag;
	
	public:
	ComplexNum(int r, int i) : real(r), imag(i) { }
	
	ComplexNum() : real(0), imag(0) { }
	
	void display()
	{
		cout << "Complex Num: " << real << " +i " << imag << endl;
	}
	
	ComplexNum operator + (ComplexNum obj)
	{
		ComplexNum temp;
		temp.real = this -> real + obj.real;
		temp.imag = this -> imag + obj.imag;
		
		return temp;
	}
};

int main()
{
	UnaryOperOL u(10);
	
	u.display();
	
	UnaryOperOL u1 = ++u; 
	u1.display();
	
	BinaryOperOL b1(10), b2(20), b3 = b1 + b2;
	b1.display();
	b2.display();
	b3.display();
	
	ComplexNum c1(2,3), c2(2,5), c3 = c1+c2;
	c1.display();
	c2.display(); 
	c3.display();
	
	return 0;
}
