
#include<iostream>
using namespace std ;

int FindSum(string str){
 int sum=0;
 for( char ch :str){
     if (isdigit(ch)){
         sum +=ch-'0';
     }
 }
 return sum;
}
int main(){
    string str="dffffff11ffffgkdyfdsk";
    cout<<" sum "<<FindSum(str)<<endl;
}