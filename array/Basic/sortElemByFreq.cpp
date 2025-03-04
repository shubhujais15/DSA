#include <bits/stdc++.h>
using namespace std;

// Custom comparator for sorting
bool cmp(pair<int, int>& a, pair<int, int>& b) {
    // Sort by frequency in descending order
    // If frequency is the same, sort by number in ascending order
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {
    int n;
    map<int, int> mp;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // Store map elements in a vector
    vector<pair<int, int>> vec(mp.begin(), mp.end());

    // Sort the vector using the custom comparator
    sort(vec.begin(), vec.end(), cmp);

    // Print the numbers sorted by frequency (highest first), then ascending order
    cout << "Sorted numbers by frequency and value:\n";
    for (auto& it : vec) {
        for (int i = 0; i < it.second; i++) { // Print each number 'it.second' times
            cout << it.first << " ";
        }
    }
    cout << endl;

    return 0;
}
