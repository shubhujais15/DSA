#include<bits/stdc++.h>
using namespace std;

void insertAtPos(vector<int>& arr,int n,int val,int pos){
    for(int i=n;i>=pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
}


void insertEnd(vector<int>& arr,int n,int val){
    arr[n] = val;
}


void insertBegining(vector<int>& arr,int n,int val){
    for(int i=n-1;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = val;
}

int main(){
    vector<int> arr = {2,3,4,6,5};
    int n = arr.size();
    int val = 8;
    int pos = 3;
    cout<<"Before Insert"<<endl;
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;

    // insertBegining(arr,n,val);
    // insertEnd(arr,n,val);
    insertAtPos(arr,n,val,pos);

    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}