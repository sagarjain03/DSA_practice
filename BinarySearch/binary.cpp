#include <iostream>
#include <vector>
#include <string>
using namespace std;
int Binarysearch(vector <int> arr,int target){
  int start = 0;
  int end = arr.size() -1;
  int mid = start + (end-start)/2;

  while(start<=end){
      int mid = start + (end-start)/2;
    if(arr[mid]==target){
      return mid;
    }
    else if(arr[mid]>target){
      end = mid-1;
    }
    else if(arr[mid]<target){
      start = mid+1;
    }
   
    
  }
  return -1;

}

int main() {
    
   vector <int> arr = {1,2,3,4,5};
   int target;
   cout<<"please enter your target ";
   cin>>target;

   if(Binarysearch(arr,target)==-1){
    cout<<"target not found";
   }
   else{
    cout<<Binarysearch(arr,target);
   }
    return 0;
}