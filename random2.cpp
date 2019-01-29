#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printRandom(){
	int x = 1+(rand()%6);
	cout << "The Number is: " << x << endl;
	if (x==1)
	cout << "You got number 1, congratulation you WIN!!!" << endl;	
	if (x==2)
	cout << "You got number 2, congratulation you take second place!!" << endl;
	if (x==3)
	cout << "You got number 3, congratulation you got third place !" << endl;
	if (x>=4)
	cout << "Ouch!! You Looseeee!!" << endl;

}

int main()
{
	srand(time(0));
	printRandom();
}
