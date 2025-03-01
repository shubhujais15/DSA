#include<bits/stdc++.h>
using namespace std;

void rearrangeArrayInIncDecOrder(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n/2;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=n-1;i>=n/2;i--){
        cout<<arr[i]<<" ";
    }

}



int main(){
    vector<int> arr = {8,7,1,6,5,9};
    int n = arr.size();
    rearrangeArrayInIncDecOrder(arr,n);
}