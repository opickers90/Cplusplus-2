#include <iostream>
using namespace std;

void printNumber(int x) {
    cout << "Prints an integer: " << x << endl;
}
void printNumber(float x) {
    cout << "Prints a float: " << x << endl;
}
void printNumber(double x) {
    cout << "Print a double: " << x << endl;
}

int main() {
  int a;
  float b;
  double c;
  cout << "Enter your integer number:" << endl;
  cin >> a; 
  cout << "Enter your float number:" << endl;
  cin >> b;
  cout << "Enter your double number:" << endl;
  cin >> c;
  printNumber(a);
  printNumber(b);
  printNumber(c);
}
