#include<iostream>
using namespace std ;
int main(){

char c;
c='9';
if((c>='a' && c<='z')||(c>='A'&& c<='Z')){
    cout<< c << " is an alphabbet"<<endl;
}else{
    cout<< c << " is not an alphabet "<<endl;
}

return 0;

}