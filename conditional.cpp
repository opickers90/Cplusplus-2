#include <iostream>
using namespace std;

int main()
{
 	int a, b;

	cout << "Please Enter First Number: \n";
	cin >> a;
	cout << "Please Enter Second Number: \n"; 
	cin >> b;
	
   if ( a > b){
	cout << a << " is greater than " << b << endl;
   
   if ( a < b){
	cout << a << " is less than " << b << endl;
   }
  }    
   else {
	cout << a << " is equal to " << b << endl;
   }
	return 0;
}
