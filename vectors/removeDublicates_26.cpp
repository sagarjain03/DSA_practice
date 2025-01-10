#include <iostream>
#include <vector>
#include <string>
using namespace std;
int removeDuplicates(vector<int>& nums) {
  int k = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size()-1;j++){
              
                if(nums[i]==nums[j]){
                  nums[j] = -1;
                    k++;
                   
                }
            }
        }
        return k;
        
    }

int main() {
  vector <int>  nums = {0,0,1,1,1,2,2,3,3,4};

  cout<<removeDuplicates(nums)<<endl;

  for(int val:nums){
    cout<<val<<" ";
  }
    
    return 0;
}