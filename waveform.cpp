#include <iostream>
#include <vector>
using namespace std;

void wavePrint(const vector<vector<int>>& arr) {
    int m = arr.size();
    int n = arr[0].size();
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < m; i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            for (int i = m - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    wavePrint(arr);
}
