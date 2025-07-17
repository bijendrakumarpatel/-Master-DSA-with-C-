#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int findDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return nums[i];
        }
    }
    return -1; 
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};
    int duplicate = findDuplicate(nums);
    if (duplicate != -1) {
        cout << "Duplicate: " << duplicate << endl;
    } else {
        cout << "No duplicates found." << endl;
    }
    return 0;
}
