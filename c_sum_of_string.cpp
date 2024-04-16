#include<iostream>
#include<vector>
using namespace std;
class sol{
public:
int remdupl(vector<int>& nums){
    int k, i=1;
    for(int k=1;k<nums.size();k++){
        if(nums[k-1]!=nums[k]){
            nums[i]=nums[k];
            i++;
        }
    }
     return i;
}
};