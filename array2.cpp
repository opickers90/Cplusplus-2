#include <iostream>
using namespace std;


void printArray(int arr[], int size) {
  for(int x=0; x<size; x++) {
    cout <<arr[x]<< endl;
  }
}
int main() {
  int myArr[5]= {42, 33, 88, 91, 12};
  printArray(myArr, 3);
}
