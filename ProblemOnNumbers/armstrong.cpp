#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int sum = 0;
    int n = num;
    while(n>0){
        int digit = n%10;
        sum = sum+(digit*digit*digit);
        n = n/10;
    }
    if(sum == num){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong";
    }
}