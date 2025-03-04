#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int k;
    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter array Elements: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key Elem to find: ";
    cin>>k;

    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"Element Found at index: "<<i;
            break;
        }
    }
}