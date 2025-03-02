#include<bits/stdc++.h>
using namespace std;

float avgofArrayElem(vector<int>& arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    float avg = (float)sum/n;
    return avg;
}

int main(){
    vector<int> arr = {2,3,5,4};
    int n = arr.size();
    float ans = avgofArrayElem(arr,n);
    cout<<"Avg of array is: "<<ans;
}