#include <iostream>
using namespace std;

void printReverseCount(int num)
{
    if (num == 1)
    {
        cout << 1 << " ";
        return;
    }
    cout << num << " ";
    printReverseCount(num - 1);
}
void printCount(int num)
{
    if (num == 1)
    {
        cout << 1 << " ";
        return;
    }
    printCount(num - 1);
    cout << num << " ";
}

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

int numSum(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return num + numSum(num - 1);
}

int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }

    return fibonacci(num - 1) + fibonacci(num - 2);
}

bool isSortedArray(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    return arr[size - 2] <= arr[size - 1] && isSortedArray(arr, size - 1);
}

double myPow(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * myPow(x, n - 1);
}

int binarySearch(int arr[], int start, int end, int target)
{
    if (start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[mid] < target)
    {
        // move right
        cout << "right before recursive call " << endl;
        return binarySearch(arr, mid + 1, end, target);
        cout << "right after recursive call " << endl;
    }
    else
    {
        // move left
        cout << "left before recursive call " << endl;
        return binarySearch(arr, start, mid - 1, target);
        cout << "left after recursive call " << endl;
    }
}

int stairStep(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return stairStep(num - 2) + stairStep(num - 1);
}

void printArray(int arr[], int idx, int size)
{
    if (idx >= size)
    {
        return;
    }

    cout << arr[idx] << " ";
    printArray(arr, idx + 1, size);
}

int linearSearch(int arr[], int idx, int size,int target){
    if (idx >= size)
    {
        return -1;
    }

   if(arr[idx]==target){
    return idx;
   }
    linearSearch(arr, idx + 1, size,target);

}
int main()
{
    // int num;
    // cout<<"enter the number you wanna know the factorial of : ";
    // cin>>num;

    // cout<<fibonacci(num);

    // vector<int> arr;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int idx = 0;
    // printArray(arr, idx, size);
    cout<<linearSearch(arr, idx, size,6);

    // cout<<binarySearch(arr,0,6,3);

    // cout<<stairStep(5);

    // cout<<myPow(2,5)<<endl;
    return 0;
}