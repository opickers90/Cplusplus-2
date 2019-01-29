#include <iostream>
using namespace std;

int main()
{
 int age;
 
	cout << "Please Enter Your Age:" << endl;
	cin >> age;	

	if (age > 16 && age < 60) {
 	 cout << "Accepted!" << endl;
	}
	else {
	  cout << "Deny!!" << endl;
	}
return 0;
}
