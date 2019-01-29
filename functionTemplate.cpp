#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b){
	return a + b;
}

int main()
{
	int x=7, y=15;
	float a=10.5, b=5.5;
	cout << sum(x,y) << endl;
	cout << sum(a,b) << endl;
}
