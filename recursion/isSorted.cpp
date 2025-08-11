#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector <int> nums,int n){
  if(n==0 || n==1){
    return true;
  }
  if(nums[n-2]>nums[n-1]){
    return false;
  }
}


  

int main(){
  vector <int> nums = {1,2,3,4,5};
  cout<<isSorted(nums,4);

  


  return 0;
}