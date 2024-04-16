#include<iostream>
//#include<string.h>
#include<algorith>
using namespace std ;

string remspc(string str){

// str.erase(remove(str.begin(), str.end() ,' '),str.end())

    //str.erase(remove(str.begin(), str.end(), ' '), str.end());
   str.erase(remove(str.begin() ,str.end() ,' '),str.end());
    return str;
}
int main(){
    string str="ab gb ng rt";
    str=remspc(str);
    cout<<str;
    return 0;
}