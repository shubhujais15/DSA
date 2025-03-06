#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;

    int rev = 0;
    int n = num;
    while(n>0){
        int lasDigit = n%10;
        rev = rev * 10 + lasDigit;
        n = n/10;
    }

    if(rev == num){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}
