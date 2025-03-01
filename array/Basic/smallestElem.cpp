#include<bits/stdc++.h>
using namespace std;

int smallestElem(int arr[], int n){
    int mini = arr[0];
    for(int i=1;i<n;i++){
        if(mini > arr[i]){
            mini = arr[i];
        }
    }
    return mini;
}

int main(){
    int arr[] = {5,3,8,6,9};
    int n = 5;
    int ans = smallestElem(arr,n);
    cout<<"Smallest ELement: "<<ans;
}



// Using sort function

// int smallestElement(vector<int> &arr){
//     sort(arr.begin(),arr.end());
//     return arr[0];
// }

// int main(){
//     vector<int> arr = {4,6,1,7,5};
//     int ans = smallestElement(arr);
//     cout<<"Smallest Elem: "<<ans;
// }



