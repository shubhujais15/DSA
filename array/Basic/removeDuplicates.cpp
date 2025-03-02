#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int>& arr,int n){
    map<int,int> ans;
    for(int i=0;i<n;i++){
        ans[arr[i]]++;
    }
    for(auto it: ans){
        cout<<it.first<<" ";
    }
}


int main(){
    vector<int> arr = {1,2,3,3,2,2,5,6,6,6};
    int n = arr.size();
    removeDuplicates(arr,n);
}





// int removeDuplicates(int arr[], int n)
// {
//   int i = 0;
//   for (int j = 1; j < n; j++) {
//     if (arr[i] != arr[j]) {
//       i++;
//       arr[i] = arr[j];
//     }
//   }
//   return i + 1;
// }
// int main() {
//   int arr[] = {1,1,2,2,2,3,3};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   int k = removeDuplicates(arr, n);
//   cout << "The array after removing duplicate elements is " << endl;
//   for (int i = 0; i < k; i++) {
//     cout << arr[i] << " ";
//   }
// }



// int removeDuplicates(int arr[], int n) {
//     set < int > set;
//     for (int i = 0; i < n; i++) {
//       set.insert(arr[i]);
//     }
//     int k = set.size();
//     int j = 0;
//     for (int x: set) {
//       arr[j++] = x;
//     }
//     return k;
//   }
//   int main() {
//     int arr[] = {1,1,2,2,2,3,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = removeDuplicates(arr, n);
//     cout << "The array after removing duplicate elements is " << endl;
//     for (int i = 0; i < k; i++) {
//       cout << arr[i] << " ";
//     }
//   }