#include <iostream>
using namespace std;

class Mother
{
	public:
	Mother()
	{};
	void sayHI()
	{
		cout << "HI" << endl;
	}
};

class Daughter: public Mother
{
	public:
	Daughter()
	{};
};

int main()
{
	Mother d;
	Daughter e;
	d.sayHI();
	e.sayHI();
}
