#include<bits/stdc++.h>
using namespace std;


bool prime(int n){
    if(n<=1) return false;
    if(n==2) return true;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int min,max;
    cout<<"Enter min range: ";
    cin>>min;
    cout<<"Enter max range: ";
    cin>>max;

    for(int i=min;i<=max;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
}