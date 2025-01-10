#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
using namespace std;
int kadaneAlgo(vector<int> nums){
  int maxSum = INT_MIN;
  int currentSum = 0;
  for(int num:nums){
    currentSum = currentSum+num
    if(currentSum>maxSum){
      maxSum = currentSum;
    }
    else if(currentSum<0){
      currentSum = 0;
    }
  }
  return maxSum;

}

int main() {
  vector <int> nums = {-2,1,-3,4,-1,2,1,-5,4};
  int size = nums.size();

  cout<<kadaneAlgo(nums);
    
    return 0;
}