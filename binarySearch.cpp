#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int l, int h, int key) {
    if(l > h) return -1;  
    
    int mid = l + (h - l) / 2;
    
    if(arr[mid] == key) 
        return mid;  
    
    if(arr[mid] > key) 
        return binarySearch(arr, l, mid - 1, key); 
    else
    return binarySearch(arr, mid + 1, h, key);  
}

int main() {
    vector<int> arr{5, 6, 7, 8, 9, 10, 10};  
    int l = 0, h = arr.size() - 1;
    int target = 7;
    
    int ans = binarySearch(arr, l, h, target);
    if(ans != -1)
        cout << "Element " << target << " found at index " << ans << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}
