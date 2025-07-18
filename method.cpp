#include <iostream>
using namespace std;

class operations {
public:
    int sum(int a, int b) {
        int result = a + b;
        cout << "Sum of " << a << " and " << b << " is: " << result << endl;
        return result;
    }

    int sum(int a, int b, int c) {
        int result = a + b + c;
        cout << "Sum of " << a << " , " << b << "and " << c << " is: " << result << endl;
        return result;
    }
};

int main() {
    operations* obj = new operations;
    obj->sum(2, 3);           
    obj->sum(2, 3, 4);         
    delete obj; // Freeing the dynamically allocated memory
    return 0;
}
