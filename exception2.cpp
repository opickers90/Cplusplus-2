#include <iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	cout << "Enter the first number: " << endl;
	cin >> num1;
	cout << "Enter the second number: " << endl;
	cin >> num2;
	num3==num1/num2;

	if(num2 == 0){
	throw 0;
	}

	cout << "Result " << num1 << " / " << num2 << " : " << num3 << endl;
	}

	catch (int x){
	cout << "Division by ZERO!!" << endl;
	}
}
