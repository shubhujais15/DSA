#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 6;
	int arr[n] = {20, 15, 26, 2, 98, 6};
	for (int i = 0; i < n; i++) {
		set<int>s;
		for (int j = 0; j < n; j++) {
			if (arr[j] < arr[i]) {
				s.insert(arr[j]);
			}
		}
		cout << s.size() + 1 << " ";
	}
}





// int main(){
// 	int n = 6;
// 	int arr[n] = {20, 15, 26, 2, 98, 6};

// 	map<int,int> mp;
// 	int brr[n];
// 	int temp = 1;
// 	for(int i=0;i<n;i++){
// 		brr[i] = arr[i];
// 	}
// 	sort(brr,brr+n);
// 	for(int i=0;i<n;i++){
// 		if(mp[brr[i]]==0){
// 			mp[brr[i]] = temp;
// 			temp++;
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<mp[arr[i]]<<" ";
// 	}
// }