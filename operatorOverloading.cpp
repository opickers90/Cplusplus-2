#include <iostream>
using namespace std;

class MyClass {
    public:
        int var;
        MyClass() { }
        MyClass(int a)
        : var(a) { }

        MyClass operator+(MyClass &obj) {
            MyClass res;
            res.var= this->var+obj.var;
            return res; 
        }
};

int main() {
    MyClass obj1(12), obj2(55), obj3(10);
    MyClass res = obj1+obj2+obj3;

    cout << res.var << endl;
}
