#include <iostream>
#include <cstring>
using namespace std;

void reverseCharArray(char name[]) {
    int i = 0;
    int n = strlen(name);
    int j = n - 1;
    while (i < j) {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

int main() {
    char Word[100] = "vinay";
    cout << "Initially: " << Word << endl;
    reverseCharArray(Word);
    cout << "Finally: " << Word << endl;
    return 0;
}
