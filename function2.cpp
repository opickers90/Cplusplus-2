#include <iostream>
using namespace std;

int input(int a,int b, int c)
{
	cout << "Your 1st Number: " << a << endl;
	cout << "Your 2nd Number: " << b << endl;
	cout << "Your 3rd Number: " << c << endl;
	int answer = a + b + c;
	return answer;
}

int main()
{
	cout << input(10,10,10) << endl;
}
