#include<bits/stdc++.h>
using namespace std;

double medianofArr(vector<int>& arr,int n){
    sort(arr.begin(),arr.end());
    double median = 0.0;
    if(n%2==1){
        median = arr[n/2];
    }
    else{
        median = (double)(arr[(n/2)-1] + arr[(n/2)])/2;
    }
    return median;
}


int main(){
    vector<int> arr = {6,7,3,4,6,6};
    int n = arr.size();
    double ans = medianofArr(arr,n);
    cout<<"Median is: "<<ans;
}