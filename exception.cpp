#include <iostream>
using namespace std;

int main()
{
	try {
		int mAge=29;
		int sAge=36;
		if (sAge > mAge){
		throw 99;
		}
	}
	catch (int x) {
		cout << "wrong age values - error " << x << endl;
	}

	return 0;
}
