#include <iostream>
#include <vector>
using namespace std;

void SpiralMatrix(const vector<vector<int>>& arr) {
    vector<int> ans;
    int m = arr.size();
    int n = arr[0].size();
    int startingRow=0;
    int endingRow=m-1;
    int startingColumn=0;
    int endingColumn=n-1;

    while (startingRow<=endingRow && startingColumn<=endingColumn) {
        for (int i = startingColumn; i <= endingColumn; i++) {
            ans.push_back(arr[startingRow][i]);
        }
        startingRow++;

        for (int i=startingRow; i<=endingRow; i++) {
            ans.push_back(arr[i][endingColumn]);
        }
        endingColumn--;
        if (startingRow <= endingRow) {
            for (int i = endingColumn; i >= startingColumn; i--) {
                ans.push_back(arr[endingRow][i]);
            }
            endingRow--;
        }
        if (startingColumn<=endingColumn) {
            for (int i=endingRow; i>=startingRow; i--) {
                ans.push_back(arr[i][startingColumn]);
            }
            startingColumn++;
        }
    }
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    SpiralMatrix(matrix);
    return 0;
}
