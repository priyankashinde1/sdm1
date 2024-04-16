#include<iostream>
#include<string.h>

using namespace std;


void revstr(char* str1){

    int i,len ,temp;
     len=strlen(str1);

    for(int i=0;i<len/2;i++){
        temp=str1[i];
        str1[i]=str1[len-i-1];
        str1[len-i-1]=str1[i];
    }
}

int main(){
    char str[38]="priyanka";
    cout<<"before reversing the string "<<str<<endl;

    revstr(str);
    cout<<"after reversing the string "<<str<<endl;

    return 0;

}


