#include<iostream>
#include<cstring>
using namespace std;
void removeAllSpaces(char sentance[]){
int n=strlen(sentance);
for(int i=0;i<=n;i++){
 if(sentance[i]==' '){
    sentance[i]='@';
 }
}
}
int main(){
char name[100]={"My name is BKP "};
removeAllSpaces(name);
cout<<name;
}