#include<iostream>
#include<string>

using namespace std;

class Computer
{
	private:
	//member variables
	string ctype;
	string brand;
	float price;
	
	public:
	
	class Processor
	{
	 	string ptype;
	 	string pbrand;
	 	float pprice;
	 	
	 	public:
	 	Processor(string pty, string pbr, float ppr) : ptype(pty), pbrand(pbr), pprice(ppr)
	 	{
		}
		
		void show()
		{
			cout << "Processor type: " << ptype
			     << "Brand: " << pbrand
			     << "Price: " << pprice << endl;
		}
	};
	
	Processor pobj;
	
	//constructor
	Computer(string ty, string br, float pr, string t, string b, float p) : ctype(ty), brand(br), price(pr), pobj(t, b, p) 
	{ }
	
	//member functions
	void display()
	{
		cout << "Computer type: " << ctype
		     << "Computer brand: " << brand
		     << "Computer price: " << price << endl;
	}
};

int main()
{
	Computer c("Laptop", "hp", 57000, "Octa Core", "intel Core", 20000);
	c.display();
	c.pobj.show();
	
	return 0;
}
