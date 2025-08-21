#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

/*
    Function: printReverseCount
    Purpose: Print numbers from 'num' down to 1 (Reverse Order) using recursion
*/
void printReverseCount(int num) {
    if (num == 1) {
        cout << 1 << " ";
        return;
    }
    cout << num << " ";
    printReverseCount(num - 1);
}

/*
    Function: printCount
    Purpose: Print numbers from 1 up to 'num' (Normal Order) using recursion
*/
void printCount(int num) {
    if (num == 1) {
        cout << 1 << " ";
        return;
    }
    printCount(num - 1);
    cout << num << " ";
}

/*
    Function: factorial
    Purpose: Calculate factorial of 'num' using recursion
*/
int factorial(int num) {
    if (num == 0) return 1;
    return num * factorial(num - 1);
}

/*
    Function: numSum
    Purpose: Calculate sum of numbers from 'num' down to 0 using recursion
*/
int numSum(int num) {
    if (num == 0) return 0;
    return num + numSum(num - 1);
}

/*
    Function: fibonacci
    Purpose: Return nth Fibonacci number using recursion
*/
int fibonacci(int num) {
    if (num == 0) return 0;
    if (num == 1) return 1;
    return fibonacci(num - 1) + fibonacci(num - 2);
}

/*
    Function: isSortedArray
    Purpose: Check if array is sorted in ascending order using recursion
*/
bool isSortedArray(int arr[], int size) {
    if (size == 0 || size == 1) return true;
    return arr[size - 2] <= arr[size - 1] && isSortedArray(arr, size - 1);
}

/*
    Function: myPow
    Purpose: Calculate x^n using recursion
*/
double myPow(double x, int n) {
    if (n == 0) return 1;
    return x * myPow(x, n - 1);
}

/*
    Function: binarySearch
    Purpose: Perform binary search recursively
    Returns: index of target if found, else -1
*/
int binarySearch(int arr[], int start, int end, int target) {
    if (start > end) return -1;

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) return mid;
    if (arr[mid] < target)
        return binarySearch(arr, mid + 1, end, target);
    else
        return binarySearch(arr, start, mid - 1, target);
}

/*
    Function: stairStep
    Purpose: Return total number of ways to climb stairs
*/
int stairStep(int num) {
    if (num == 0 || num == 1) return 1;
    return stairStep(num - 2) + stairStep(num - 1);
}

/*
    Function: printArray
    Purpose: Print all elements of array using recursion
*/
void printArray(int arr[], int idx, int size) {
    if (idx >= size) return;
    cout << arr[idx] << " ";
    printArray(arr, idx + 1, size);
}

/*
    Function: linearSearch
    Purpose: Find index of 'target' in array using recursion
    Returns: index if found, else -1
*/
int linearSearch(int arr[], int idx, int size, int target) {
    if (idx >= size) return -1; // Not found
    if (arr[idx] == target) return idx; // Found
    return linearSearch(arr, idx + 1, size, target); // Check next
}

/*
    Function: minElement
    Purpose: Find minimum element in array using recursion
*/
int minElement(int arr[], int idx, int size, int &mini) {
    if (idx >= size) return mini;
    if (mini > arr[idx]) mini = arr[idx];
    return minElement(arr, idx + 1, size, mini);
}

/*
    Function: putEvenInVector
    Purpose: Store all even numbers from array into vector using recursion
*/
void putEvenInVector(int arr[], int idx, int size, vector<int> &brr) {
    if (idx >= size) return;
    if (arr[idx] % 2 == 0) brr.push_back(arr[idx]);
    putEvenInVector(arr, idx + 1, size, brr);
}

void doubleEachElement(int arr[], int idx, int size){
    if(idx>=size) return;
    arr[idx] = 2*arr[idx];
    return doubleEachElement(arr,idx+1,size);

}
int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int idx = 0;

    vector<int> brr;
    putEvenInVector(arr, idx, size, brr);

    // Printing even numbers
    cout << "Even numbers in array: ";
    for (int i = 0; i < brr.size(); i++) {
        cout << brr[i] << " ";
    }
    cout << endl;

    // Testing linear search
    int target = 5;
    int pos = linearSearch(arr, 0, size, target);
    if (pos != -1)
        cout << "Target " << target << " found at index: " << pos << endl;
    else
        cout << "Target " << target << " not found" << endl;

    return 0;
}
