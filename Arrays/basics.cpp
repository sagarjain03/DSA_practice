#include <iostream>
#include <limits.h>
using namespace std;

int largest(int arr[], int size) {
    int large = INT_MIN;
    for (int i = 0; i < size; i++) { 
        if (arr[i] > large) {
            large = arr[i];
        }
    }
    return large;
}

int smallest(int arr[], int size) {
    int small = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < small) {
            small = arr[i];
        }
    }
    return small;
}

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) { 
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int sumOfArray(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++) {
        sum += arr[i];
    }
    cout<<sum;
}
int productOfArray(int arr[],int size){
    int pro = 1;
    for(int i=0;i<size;i++) {
        pro *= arr[i];
    }
    cout<<pro;
}

void swapMaxMin(int arr[],int size){
   int start = 0;
    int end = size - 1;

    while (start < end) { 
        if(start)
    }
}
int main() {
    int arr[] = {6, 3, 1, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);


    return 0;
}
