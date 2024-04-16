#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std ;
int main(){

char str[100];
cout<<"enter the string"<<endl;
cin>>str;

int len=strlen(str);

for(int i=0 ;i<len;i++)
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
    for(int j=0;j<len;j++){
        str[j]==str[j+1];
    }
    i--;
    len--;
}
cout<<"after removing vowels "<<str;
return 0;
}