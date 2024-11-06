#include <iostream>
#include <list>
#include <unordered_set>
#include "array_utils.h"

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

  
    vector<int> arr = createArray(n);
    cout << "Array: ";
    printArray(arr);

    int index = findMinOddIndex(arr);
    if (index != -1) {
        cout << "Index of the smallest odd element: " << index << endl;
    }
    else {
        cout << "No odd elements found." << endl;
    }

    
    list<int> lst = createList(n);
    cout << "\nList: ";
    printList(lst);

    int increment;
    cout << "Enter value to increment each list element: ";
    cin >> increment;
    incrementList(lst, increment);
    cout << "List after incrementing: ";
    printList(lst);

    return 0;
}
