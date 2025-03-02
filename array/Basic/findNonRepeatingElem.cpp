#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int>& arr,int n){
    map<int,int> ans;
    for(int i=0;i<n;i++){
        ans[arr[i]]++;
    }
    for(auto it: ans){
        if(it.second == 1){
            cout<<it.first<<" ";
        }
        
    }
}


int main(){
    vector<int> arr = {1,2,3,3,2,2,5,6,6,6,7,8,8,-1};
    int n = arr.size();
    removeDuplicates(arr,n);
}
