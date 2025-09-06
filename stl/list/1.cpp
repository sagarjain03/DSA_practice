#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<int> l = {1, 2, 3};

    // push_front / push_back
    l.push_front(0);
    l.push_back(4);

    // pop_front / pop_back
    l.pop_front();
    l.pop_back();

    // insert at 2nd position
    auto it = l.begin();
    advance(it, 1); // move iterator to 2nd element
    l.insert(it, 10);

    // erase last element
    l.erase(--l.end());

    // remove all 10
    l.remove(10);

    // traverse
    cout << "List elements: ";
    for (int x : l) cout << x << " ";
    cout << endl;

    // sort (list has its own sort function!)
    l.push_back(7); l.push_back(3); l.push_back(5);
    l.sort();

    // reverse
    l.reverse();

    cout << "Sorted & Reversed List: ";
    for (int x : l) cout << x << " ";
    cout << endl;

    return 0;
}
