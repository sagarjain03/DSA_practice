#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr,int start,int end){

       int mid = start + (end-start)/2;

    int leftSize = mid-start+1;
    int rightSize = end-mid;

    //phle to do array bnalo 
    vector <int> left;
    vector<int>right;

    int k = start;

    for(int i=0;i<leftSize;i++){

        left.push_back(arr[k]);
        k++;

    }
     k = mid+1;
    for(int i=0;i<rightSize;i++){
        right.push_back(arr[k]);
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;

    int mainIndex = start;


    while(leftIndex<leftSize && rightIndex<rightSize){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainIndex] = left[leftIndex];
            leftIndex++;
            mainIndex++;
        }
        else{
            arr[mainIndex] = right[rightIndex];
            rightIndex++;
            mainIndex++;
        }
    }

    while(rightIndex<rightSize){
         arr[mainIndex] = right[rightIndex];
            rightIndex++;
            mainIndex++;
    }
    while(leftIndex<leftSize){
         arr[mainIndex] = left[leftIndex];
            leftIndex++;
            mainIndex++;
    }

   

}

void  mergeSort(vector<int> &arr,int start,int end){
    int mid = start + (end-start)/2;

    if(start>=end){
        return;
    }

    //left part ko sort kro
    mergeSort(arr,start,mid);
    //right part ko sort kro
    mergeSort(arr,mid+1,end);

    //dono arrays ko merge krdo

    merge(arr,start,end);


}
int main(){

    vector<int> arr = {5,4,3,2,1};
    int start = 0;
    int end = arr.size() -1;

    mergeSort(arr,start,end);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
return 0 ;
}