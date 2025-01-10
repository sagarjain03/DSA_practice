#include <iostream>
#include <vector>
#include <string>
using namespace std;
int mooreAlgo(vector<int> nums){
  int candidate = nums[0];
  int count = 1;
  for(int num:nums){
    if(candidate == num){
      count++;
    }
    if(candidate!=num){
      count--;
    }
    if(count==0){
      candidate= num;
      count=1;
    }

  }
  int maxEleSize = 0;
  for(int num:nums){
    if(num == candidate){
      maxEleSize++;
    }

  }
  if(maxEleSize>nums.size()/2){
    return candidate;
  }
  else{
    return -1;
  }
}

int main() {
  vector <int> nums = {3, 3, 4, 2, 4, 4, 2, 4, 4};
  cout<<mooreAlgo(nums);
    
    return 0;
}