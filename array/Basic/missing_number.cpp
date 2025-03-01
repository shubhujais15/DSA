#include <bits/stdc++.h>
using namespace std;

int missing_number(vector<int> &arr,int n){
    int m = arr.size();
    
    for(int i = 1; i <= m; i++){
        int found = 0;
        for(int j=0;j<m;j++){
            if(arr[j]==i){
            found++;
            j++;
        }
        }
        if(found == 0){
            return i;
        }
    }

}

// int missing_number(vector<int> &arr,int n){
//     int sum = (n*(n+1))/2;
//     int sum_of_arr = 0;
//     int m = arr.size();
//     for(int i=0;i<m;i++){
//         sum_of_arr += arr[i];
//     }
//     return sum-sum_of_arr;
// }


int main() {
    vector<int> arr;
    int n;
    cout<<"Enter number of elem:"<<endl;
    cin >> n;
    for(int i=0;i<n-1;i++){
        cout<<"Enter Elements:"<<endl;
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int ans = missing_number(arr,n);
    cout<<"Missing Number is "<<ans<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<"After operation:"<<endl;
    //     cout<<arr[i];
    // }


}
