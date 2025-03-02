#include<bits/stdc++.h>
using namespace std;

void rotateArrayByK(vector<int>& arr, int n, int k){
    int ans[n];
    int j = 0;
    for(int i=k;i<n;i++){
        ans[j] = arr[i];
        j++;
    }
    for(int i=0;i<k;i++){
        ans[j] = arr[i];
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    vector<int> arr ={2,4,5,6,7,8,9};
    int n = arr.size();
    int k = 2;
    rotateArrayByK(arr,n,k);
}



// #include <iostream>
// using namespace std;
// void swap(int arr[], int a, int b, int k)
// {
//   for (int i = 0; i < k; i++)
//   {
//     int temp = arr[a + i];
//     arr[a + i] = arr[b + i];
//     arr[b + i] = temp;
//   }
// }
// void BlockSwap(int arr[], int k, int n)
// {
//   if (k == 0 || k == n)
//     return;
//   // If first part and second part are of same size
//   if (k == n - k)
//   {
//     swap(arr, 0, n - k, k);
//     return;
//   }
//   // If first part of array is of smaller size
//   else if (k < n - k)
//   {
//     swap(arr, 0, n - k, k);
//     BlockSwap(arr, k, n - k); // second part of array is taken now
//   }
//   // If second part of array is of smaller size
//   else
//   {
//     swap(arr, 0, k, n - k);
//     BlockSwap(arr + n - k, 2 * k - n, k);
//   }
// }
// int main()
// {
//   int arr[] = {1, 2, 3, 4, 5, 6, 7};
//   int n = 7;
//   int k = 2;
//   BlockSwap(arr, k, n);
//   cout << "After Rotating the array " << endl;
//   for (int i = 0; i < n; i++)
//     cout << arr[i] << " ";
//   return 0;
// }





// #include <iostream>
// #include <algorithm> // For reverse()
// using namespace std;

// void rotateArray(int arr[], int k, int n) {
//     k = k % n; // Handle cases where k > n
//     reverse(arr, arr + k);      // Reverse the first k elements
//     reverse(arr + k, arr + n);  // Reverse the remaining n-k elements
//     reverse(arr, arr + n);      // Reverse the whole array
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 2;

//     rotateArray(arr, k, n);

//     cout << "After Rotating the array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }