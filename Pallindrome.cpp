#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char word[]) {
    int i = 0;
    int n = strlen(word);
    int j = n - 1;
       while (i < j) {
        if (word[i] != word[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    char name[100] = "racecar";
        cout << name << " is a palindrome" << endl;
    return 0;
}
