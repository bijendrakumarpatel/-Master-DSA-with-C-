//Factorial of a largest element 
#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(int arr[]){
    int temp;
 for(int i=0;i<7;i++){
       for(int j=i+1;j<7;j++){
        if(arr[j]<arr[i]){
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
        }
       }
    }
}
long long Factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    long long fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int findLargest(int arr[]) {
    int largest = arr[0];
    for (int i = 1; i <6; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
int arr[]={1,20,3,6,7,9};
bubbleSort(arr);
int num;
cout << "Factorial of " << num << " is: " << Factorial(findLargest(largest)) << endl;
cout << "The largest element in the array is: " << findLargest(arr) << endl;
for(int i=0;i<=5;i++){
    cout<<arr[i]<<" ";
}
}