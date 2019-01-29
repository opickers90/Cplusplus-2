#include <iostream>
using namespace std;

int volume1(int l = 1, int w = 1, int h = 1){
	return l*w*h;
}

int volume2(int a = 2, int b = 2, int c = 2){
	return a*b*c;
}

int main(){
	cout << volume1() << endl;
	cout << volume1(5) << endl;
	cout << volume1(2,3) << endl;
	cout << volume1(3,7,6) << endl;;
	cout << volume2() << endl;
	cout << volume2(3) << endl;
	cout << volume2(3,3) << endl;
	cout << volume2(3,3,3) << endl;
	cout << volume1(2,2,2)*volume2(3,3,3) << endl;
}
