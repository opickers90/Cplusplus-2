#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout << "Please Enter Starting Number: \n";
	cin >> num;
	if (num < 10)
		while ( num < 10){
		cout << "Number: " << num << endl;
		num++;
		}
	else 
	cout << "Your Number is wrong\n";
		
return 0;
}
