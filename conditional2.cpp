#include <iostream>
using namespace std;

int main()
{

	int age;

	cout << "Please enter your age: \n";
	cin >> age;
	
	if (age > 14) 
  		if(age >= 18) 
    		cout << "Adult" << endl;
  		
  		else 
    		cout << "Teenager" << endl;
  		
	
	else 
  		if (age > 0) 
    		cout << "Child" << endl;
  		
  		else 
  		cout << "Something's wrong" << endl;
  		
	
return 0;
}
