#include<iostream>
using namespace std;
int main(){

char str[30];
int i,length=0;
cout<<"enter the string"<<endl;
cin>>str;

for(int i=0 ;str[i]!=0; ++i)
{
    length++;
}
cout<<" length of string is" <<length<<endl;

}