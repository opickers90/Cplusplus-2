#include <iostream>
#include <string>
using namespace std;

class myClass {
	public:
	
	myClass(string nm){
	setName(nm);
	}

	void setName(string x){
		name = x;
	}

	string getName(){
	return name;
	}

	private:
		string name;
};

int main(){
	myClass myObj1("Taufik");
	myClass myObj2("Irfan");
	cout << myObj1.getName() << endl;
	cout << myObj2.getName() << endl;
	return 0;
}
