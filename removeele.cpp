#include<iostream>
#include<vector>
using namespace std;
class sol{
public:
int main(){


   int remove(vector<int>&nums ,int val ){
int k=0;

for(int i=0;i<nums.size();i++){
    if(nums[i]!=val){
        nums[k]=nums[i];
        k++;
    }
}
return k;
    }
    
}};