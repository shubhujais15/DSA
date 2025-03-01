#include<bits/stdc++.h>
using namespace std;

int sumArray(vector<int> &arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    // vector<int> arr = {2,4,5,6,7};
    vector<int> arr = {1,2,1,3,1};
    int n = arr.size();
    int sum = sumArray(arr,n);
    cout<<"Sum is: "<<sum<<endl;
}