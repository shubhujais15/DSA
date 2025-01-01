#include<iostream>
using namespace std;

// selection_sort : Find the smallest element in the unsorted portion of the array and swap it with the first element of that portion, repeating for each position in the array.
// TC: O(n^2)

int selection_sort(int n,int arr[]){
    for(int i=0;i<=n-2;i++){      // [5,2,3,1,4] --> loop go through 0th index to last_index-1 bcz last index is sorted till n-2 index
        int mini = i;             // let ith index have minimum element
        for(int j=i;j<n;j++){      //when 0th index got its min value then the loop needs to start with nxt index that's why it starts from ith index 
            if(arr[j]<arr[mini]){     //checking the other index elem with mini index
                mini = j;             // if it got less element at j index then mini index replace to j
            }
            // swapping
            int temp = arr[mini];  
            arr[mini] = arr[i];
            arr[i] = temp;
    }
}
}

int main(){
    int n;
    cout<<"Enter num of elements:"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter element "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}