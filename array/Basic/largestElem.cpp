#include<bits/stdc++.h>
using namespace std;

int largestElem(vector<int> &arr, int n){
    int maxi = arr[0];
    for(int i=0;i<n;i++){
        if(maxi < arr[i]){
            maxi = arr[i];
        }
    }
    return maxi;
}

int main(){
    vector<int>arr = {4,1,5,2,3};
    int n = arr.size();
    int ans = largestElem(arr,n);
    cout<<"Largest ELement:"<<ans;
}


// Using sort function

// int largestElement(vector<int>&arr){
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-1];
// }

// int main(){
//     vector<int>arr = {4,1,5,2,3};
//     int ans = largestElement(arr);
//     cout<<"Largest ELement:"<<ans;
// }



