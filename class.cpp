#include <iostream>
using namespace std;

class BankAccount {
	public:
		void sayHi(){
			cout << "Hi there" << endl;
		}
		void sayHello(){
			cout << "Hallo there" << endl;
		}
};

int main(){
	BankAccount test;
	test.sayHi();
	test.sayHello();
}
