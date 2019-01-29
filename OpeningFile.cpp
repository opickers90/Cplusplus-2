#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream MyFile("test.txt");

	if(MyFile.is_open()){
		MyFile << "This is Awesome \n";
	}
	else{
		cout << "Something went wrong \n";
	}

	MyFile.close();
} 
