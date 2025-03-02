#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[5][2] = {{1,2},{2,3},{2,1},{3,4},{3,2}};

    unordered_map<int,int> mpp;

    for(int i=0;i<n;i++){
        int first = arr[i][0];
        int second = arr[i][1];

        if(mpp.find(second)!= mpp.end() && mpp[second]==first){
            cout<<"("<<first<<" "<<second<<")"<<endl;
        }
        else{
            mpp[first] = second;
        }
        
    }
}


