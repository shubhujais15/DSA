#include<bits/stdc++.h>
using namespace std;

int secLargestElem(vector<int> &arr,int n){
    if (n < 2) {
        cout << "No second smallest element exists" << endl;
        return -1; // Return a flag value when no second smallest exists
    }

    int largest = arr[0];
    int sec_largest = arr[0];

    for(int i=1;i<n;i++){
        if(largest < arr[i]){
            sec_largest = largest;
            largest = arr[i];
        }
        else if(sec_largest < arr[i] && largest != arr[i]){
            sec_largest = arr[i];
        }
    }
    return sec_largest;
}

int secSmallestElem(vector<int> &arr,int n){
    
    if (n < 2) {
        cout << "No second smallest element exists" << endl;
        return -1; // Return a flag value when no second smallest exists
    }

    int smallest = arr[0];
    int sec_smallest = arr[0];

    for(int i=1;i<n;i++){
        if(smallest > arr[i]){
            sec_smallest = smallest;
            smallest = arr[i];
        }
        else if(sec_smallest > arr[i] && smallest != arr[i]){
            sec_smallest = arr[i];
        }
    }
    return sec_smallest;
}

int main(){
    vector<int> arr = {3,8,5,1,2};
    int n = arr.size();
    int secSmallest = secSmallestElem(arr,n);
    cout<<"Second Smallest Element: "<<secSmallest<<endl;
    int secLargest = secLargestElem(arr,n);
    cout<<"Second Largest Element: "<<secLargest;
}



// void getElements(int arr[],int n)
// {
//     if(n==0 || n==1)
//         cout<<-1<<" "<<-1<<endl; 
//     sort(arr,arr+n);
//     int small=arr[1];
//     int large=arr[n-2];
//     cout<<"Second smallest is "<<small<<endl;
//     cout<<"Second largest is "<<large<<endl;
// }
// int main()
// {
//     int arr[]={1,2,4,6,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     getElements(arr,n);
//     return 0;
// }