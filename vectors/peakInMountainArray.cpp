#include <iostream>
#include <vector>
using namespace std;

int peakInMountainArray(vector<int> nums) {
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if the current mid is the peak
        if (mid > 0 && mid < nums.size() - 1 && nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
            return mid;
        }

        // Move right if the slope is increasing
        if (mid < nums.size() - 1 && nums[mid] < nums[mid + 1]) {
            start = mid + 1;
        }
        // Move left if the slope is decreasing
        else {
            end = mid - 1;
        }
    }

    return -1; // Return -1 if no peak is found (not a valid mountain array)
}

int main() {
    vector<int> nums = {1, 3, 5, 6, 4, 2, 0};
    
    int peakIndex = peakInMountainArray(nums);

    if (peakIndex != -1) {
        cout << "The peak is at index: " << peakIndex << " with value: " << nums[peakIndex] << endl;
    } else {
        cout << "No peak found or not a valid mountain array." << endl;
    }

    return 0;
}
