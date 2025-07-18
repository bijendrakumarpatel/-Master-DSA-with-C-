#include <iostream>
#include <cstring>
using namespace std;

void convertLowercase(char arr[]){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-'A'+'a';
    }
}

int main() {
    char arr[10] = "BIJENDRA";
   convertLowercase(arr);
   cout<<arr<<endl;
}
