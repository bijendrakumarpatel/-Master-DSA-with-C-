#include <iostream>
using namespace std;

class A {
public:
    int math;
    void Math() {
        cout << "Math" << endl;
    }
};

class B {
public:
    int physics;
    void Physics() {
        cout << "Physics" << endl;
    }
};

class C : public A, public B {
public:
    int science;
    void Science() {
        cout << "Science" << endl;
    }
};

int main() {
    C obj;
    obj.math = 90;
    obj.physics = 85;
    obj.science = 95;
    cout << "Math: " << obj.math << ", Physics: " << obj.physics << ", Science: " << obj.science << endl;

    return 0;
}
