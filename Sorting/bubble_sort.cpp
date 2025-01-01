#include<iostream>
using namespace std;

// bubble sort: push max elem to the last by adjacent swapping
// TC: Worst & Avg -> O(n^2) , Best -> O(n) --> (By did_swap method)

void bubble_sort(int n, int arr[]) {
    // Outer loop to iterate through the array from the end to the beginning
    for (int i = n - 1; i >= 0; i--) {
        // Variable to track if any swaps were made during the current pass
        int did_swap = 0;

        // Inner loop to compare adjacent elements up to the current `i`
        for (int j = 0; j < i; j++) {
            // If the current element is greater than the next element, swap them
            if (arr[j + 1] < arr[j]) {
                // Swap the two elements
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;

                // Mark that a swap was performed
                did_swap = 1;
            }
        }

        // If no swaps were made in the inner loop, the array is already sorted
        if (did_swap == 0) {
            break; // Exit the loop early to save unnecessary iterations
        }
    }
}



int main(){
    int n;
    cout<<"Enter num of elements:"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter element "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}