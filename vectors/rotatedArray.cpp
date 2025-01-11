#include <iostream>
#include <vector>
#include <string>
using namespace std;
int searchInRotatedArray(vector<int> nums,int target){
  int start = 0;
  int end = nums.size() - 1;
  while(start<=end){
    int mid = start + (end-start)/2;
    if(nums[mid]==target){
      return mid;
    }
    //agr left part sorted hai
    if(nums[start]<=nums[mid]){
       if(nums[start]<=target && nums[mid]>=target){
      end = mid-1;
    }
    else{
      start = mid+1;
    }

    }
   
    else{
        if(nums[end]>=target && nums[mid]<=target){
           start = mid+1;
    
    }
    else{
   end = mid-1;
    }
    }
  }
  return -1;

}

int main() {
    vector <int> nums = {4,5,6,7,1,2,3};
    int target;
    cout<<"enter the element you wanna search "<<endl;
    cin>>target;

    cout<<searchInRotatedArray(nums,target);
    return 0;
}