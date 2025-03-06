#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i){
    int rev = 0;
    int n = i;
    while(n>0){
        int lasDigit = n%10;
        rev = rev * 10 + lasDigit;
        n = n/10;
    }
    if(rev == i){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int min,max;
    cout<<"Enter min number: ";
    cin>>min;
    cout<<"Enter max number: ";
    cin>>max;
    for(int i = min; i<=max; i++){
        bool pal = palindrome(i);
        if(pal){
            cout<<i<<" ";
        }
    }
}