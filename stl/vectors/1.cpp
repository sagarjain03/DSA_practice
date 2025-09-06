#include <iostream>
#include <vector>
#include <algorithm> // for sort, reverse, etc.
using namespace std;

int main() {
    // -----------------------------
    // Vector Basics
    // -----------------------------
    vector<int> v = {10, 20, 30};

    // push_back -> insert at end
    v.push_back(40);

    // pop_back -> remove last element
    v.pop_back();

    // insert element at specific position
    v.insert(v.begin() + 1, 15);  // insert at index 1

    // erase element at specific position
    v.erase(v.begin() + 2);

    // clear all elements
    // v.clear();

    // size vs capacity
    cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    // Access elements
    cout << "Front: " << v.front() << ", Back: " << v.back() << endl;
    cout << "Element at index 1: " << v.at(1) << endl;

    // -----------------------------
    // Traversal
    // -----------------------------
    cout << "Vector elements: ";
    for (int x : v) cout << x << " ";  // range-based loop
    cout << endl;

    cout << "Using iterator: ";
    for (auto it = v.begin(); it != v.end(); it++) cout << *it << " ";
    cout << endl;

    // -----------------------------
    // Algorithms with vector
    // -----------------------------
    vector<int> arr = {5, 3, 8, 6, 2};

    // sort in ascending
    sort(arr.begin(), arr.end());

    // sort in descending
    sort(arr.rbegin(), arr.rend());

    // reverse
    reverse(arr.begin(), arr.end());

    // find
    auto it = find(arr.begin(), arr.end(), 8);
    if (it != arr.end()) cout << "Found 8 at index: " << distance(arr.begin(), it) << endl;

    // binary_search (works only on sorted container)
    sort(arr.begin(), arr.end());
    cout << "Is 6 present? " << binary_search(arr.begin(), arr.end(), 6) << endl;

    return 0;
}
