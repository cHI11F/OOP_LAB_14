#include "array_utils.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <random>


vector<int> createArray(int n) {
    vector<int> arr;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 100);

    for (int i = 0; i < n; ++i) {
        arr.push_back(dist(gen));
    }
    return arr;
}

void printArray(const vector<int>& arr) {
    copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

int findMinOddIndex(const vector<int>& arr) {
    int minOddIndex = -1;
    int minOddValue = INT_MAX;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 != 0 && arr[i] < minOddValue) {
            minOddValue = arr[i];
            minOddIndex = i;
        }
    }
    return minOddIndex;
}


list<int> createList(int n) {
    list<int> lst;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 100);

    for (int i = 0; i < n; ++i) {
        lst.push_back(dist(gen));
    }
    return lst;
}

void printList(const list<int>& lst) {
    copy(lst.begin(), lst.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

void incrementList(list<int>& lst, int increment) {
    for (auto& elem : lst) {
        elem += increment;
    }
}
