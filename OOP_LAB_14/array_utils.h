#pragma once
#include <vector>
#include <list>

using namespace std;


vector<int> createArray(int n);
void printArray(const vector<int>& arr);
int findMinOddIndex(const vector<int>& arr);


list<int> createList(int n);
void printList(const list<int>& lst);
void incrementList(list<int>& lst, int increment);
