#include<iostream>
using namespace std;

// insertion sort: take the element and place it in its correct position
// TC: Worst & Avg -> O(n^2) , Best -> O(n) --> (Bcz it breaks if first outer loop runs and no swapping will need)

void insertion_sort(int n, int arr[]) {
    // Outer loop: Start from the second element (index 1) as the first element is already "sorted"
    for (int i = 1; i < n; i++) {
        // Inner loop: Move the current element backward through the sorted portion
        for (int j = i; j > 0; j--) {
            // If the current element is smaller than the previous one, swap them
            if (arr[j - 1] > arr[j]) {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            } else {
                // Break early if no more swaps are needed
                break;
            }
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
    insertion_sort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}