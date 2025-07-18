#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(char first,char second){
    return first>second;
}
bool compare(int a,int b){
    return a>b;
}
int main() {
string s="Bijendra";
sort(s.begin(),s.end(),cmp);
vector<int> arr[1,2,3,4,5,6,4];
}