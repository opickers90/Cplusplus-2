#include <iostream>
using  namespace std;

int main(){

	int myArr[5];
	int sum = 0;

	for(int x=0; x<5; x++) {
  	myArr[x] = 10;
 	sum += myArr[x];

	cout << x << ": " << myArr[x] << endl;
	cout << sum << endl;
}

//int arr[] = {11, 35, 62, 555, 989};
//int sum = 0; 

//for (int x = 0; x < 5; x++) {
//  sum += arr[x];
//}

//cout << sum << endl;


return 0;
}
