#include<iostream>
using namespace std ;

// bool IsPrime(int n){
//     if(n<=1)
//     return false;

//     for(int i=2;i<n/2;i++){
//         if(n%i==0)
//         return false;
//     }
//     return true;
// }
// int main(){
//     IsPrime(15) ? cout <<" true \n" : cout<<" false\n";
//     IsPrime(19) ? cout <<" true \n" : cout<<" false \n";

int num , i ,upto;
int main(){


cout<<"find no upto"<<endl;
cin>> upto;

for(num=2;num<=upto;num++){
    for(int i=2;i<=(num/2);i++){
        if(num%i==0)
        i=num;
        break;
    }
}
if(i!=num){
    cout<<num<<endl;
}
return 0 ;
}
