#include<bits/stdc++.h>
using namespace std;

void print1(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
            cout<<endl;
    }
}

void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print3(int n){
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0;j<i+1;j++){ 
            cout<<count<<" ";
            count=count+1;
        }
        
        cout<<endl;
    }
}
// print3 and print4 prints same pattern
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<i+1;j++){ 
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<i+1;j++){ 
            cout<<i<<" ";           //The printed number starts with row num & the num of col also depends on row that's why here we print i
        }
        cout<<endl;
    }
}

void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n+1-i;j++){ 
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print7(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){ 
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print8(int n){
    for(int i=0;i<n;i++){
        // print space
        for(int j=0;j<=n-i-1;j++){ 
            cout<<"  ";
        }
        // print star
        for(int j=0;j<2*i+1;j++){
            cout<<"* ";
        }
        // print space
         for(int j=0;j<=n-i-1;j++){ 
            cout<<"  ";
        }
        cout<<endl;
    }
}

void print9(int n){
    for(int i=0;i<n;i++){
        // print space
        for(int j=0;j<i;j++){ 
            cout<<"  ";
        }
        // print star
        for(int j=0;j<(n+4-(2*i));j++){
            cout<<"* ";
        }
        // print space
         for(int j=0;j<i;j++){ 
            cout<<"  ";
        }
        cout<<endl;
    }
}

void print10(int n){              //In main function call both print8 and print10 together to print pattern
    for(int i=0;i<n;i++){
        // print space
        for(int j=0;j<=i;j++){ 
            cout<<"  ";
        }
        // print star
        for(int j=0;j<(n+4-(2*i));j++){
            cout<<"* ";
        }
        // print space
         for(int j=0;j<i;j++){ 
            cout<<"  ";
        }
        cout<<endl;
    }
}

void print11(int n){
    for(int i=0;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=0;j<stars;j++){ 
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print12(int n){
    int start=1;
    for(int i=0;i<=n;i++){
        if(i % 2==0) {
         start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<=i;j++){ 
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}

void print13(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            char ch = 'A' +(n-i+j);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print14(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            char ch = 'A'+i;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print17(int n){
    for(int i=0;i<n;i++){
        // print space
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        // print char
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
            if(j<breakpoint) ch++;
            else ch--;
        }
        // print space
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print19(int n){
    for(int i=0;i<n;i++){
        // print stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        // print space
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        // print stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // int inis=8;
     for(int i=1;i<=n;i++){
        // print stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        // print space
        for(int j=0;j<(2*n)-(2*i);j++){
            cout<<" ";
        }
        // print stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        // inis-=2;
    }
}

void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"* ";
             }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cout<<"Enter value of n"<<endl;
    cin>>t;
    for(int i=0;i<=t;i++){
        int n;
        cin>>n;
        print21(n);
    }
}