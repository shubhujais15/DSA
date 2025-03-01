#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr,int n){
    int ans[n];
    for(int i=n-1; i>=0 ;i--){
        ans[n-i-1] = arr[i];
    }
    for(int i = 0; i < n; i++){
        cout<<ans[i];
    }
}

int main(){
    vector<int> arr = {2,3,4,5,6};
    int n = arr.size();
    reverseArray(arr,n);
}



// void printArray(int arr[], int n) {
//     cout << "The reversed array is:- " << endl;
//     for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//     }
//  }

//  void reverseArray(int arr[], int start, int end) {
//     if (start < end) {
//        swap(arr[start], arr[end]);
//        reverseArray(arr, start + 1, end - 1);
//     }
//  }
//  int main() {
//     int n = 5;
//     int arr[] = { 5, 4, 3, 2, 1 };
//     reverseArray(arr, 0, n - 1);
//     printArray(arr, n);
//     return 0;
//  }