#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    vector <int> nums = {4,5,4,3,5};
    int ans = 0;
    for(int num : nums){
      ans=ans^num;
    }
    cout<<ans;
    return 0;
}