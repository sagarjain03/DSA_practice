#include <iostream>
#include <vector>
#include <string>
using namespace std;
int peakInMountainArray(vector <int> nums,int target){
   int start = 0;
  int end = nums.size() - 1;
  while(start<=end){
    int mid = start + (end-start)/2;
    if(mid>0 && mid <nums.size()-1 && nums[mid]>nums[mid-1]&& nums[mid]<nums[mid+1]){
      return mid;
    }
    if(mid <nums.size()-1 && nums[mid]<nums[mid+1]){
      //move right
      start = mid+1;
    }
    if(mid>0 && nums[mid]>nums[mid+1]){
      end = mid-1;
    }
    
    
    
    
    
    }
    return -1;

}

int main() {
     vector <int> nums = {1,3,5,6,4,2,0};
    int target;
    cout<<"enter the element you wanna search "<<endl;
    cin>>target;

    cout<<peakInMountainArray(nums,target);

    
    return 0;
}