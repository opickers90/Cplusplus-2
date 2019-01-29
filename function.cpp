#include <iostream>
using namespace std;

//Function Declaration
void inputSomething();
void printSomething();

string a;

int main()
{
	

	inputSomething();
	printSomething();

return 0;
}

//Funtion definition
void inputSomething()
{
	
	cout << "Please enter your name:" << endl;
	cin >> a;
}

void printSomething()
{
	cout << "Hi " << a << ", How are you today?" << endl;
}
