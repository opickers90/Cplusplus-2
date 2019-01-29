#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout << "Please Insert Number: \n";
	cin >> num;

//	int a = num;
	do {
	cout << "Number is: " << num  << endl;
	num++;
	}
	while (num<10);
return 0;
}
