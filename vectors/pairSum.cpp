#include <iostream>
#include <vector>
#include <string>
using namespace std;

// this is a brute force approach
// vector<int> TargetSum(vector<int> nums,int target){
//   vector <int> ans;
//   for(int i=0;i<nums.size();i++){
//     for(int j=i+1;j<nums.size();j++){
//       if(nums[i]+nums[j]==target){
//         ans.push_back(i);
//         ans.push_back(j);

//         return ans;
        
//       }

//     }
//   }
// }

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Better approach but only if the array is sorted
vector<int> TargetSum(vector<int> nums, int target) {
    vector<int> ans;
    int start = 0;
    int end = nums.size() - 1;

    while (start < end) {
        if (nums[start] + nums[end] == target) {
            ans.push_back(start);
            ans.push_back(end);
            break; // Exit after finding the first pair
        } else if (nums[start] + nums[end] > target) {
            end--;
        } else { // nums[start] + nums[end] < target
            start++;
        }
    }

    return ans; // Return the indices of the pair, or empty if not found
}

int main() {
    int target;
    vector<int> nums = {1, 5, 6, 7, 9};

    cout << "Please enter your target: " << endl;
    cin >> target;

    vector<int> ans = TargetSum(nums, target);

    if (ans.empty()) {
        cout << "No pair found that sums to the target." << endl;
    } else {
        cout << "Indices: " << ans[0] << " and " << ans[1] << endl;
    }

    return 0;
}
