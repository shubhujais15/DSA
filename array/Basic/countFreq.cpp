#include<bits/stdc++.h>
using namespace std;

void countFreq(vector<int> &arr,int n){

    map<int,int> freq;

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(auto it: freq){
        cout<<it.first<<" "<<it.second<<endl;
    }
}


int main(){
    vector<int> arr = {3,3,10,2,5,2,10};
    int n = arr.size();
    countFreq(arr,n);
}