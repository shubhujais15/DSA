
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
    cout<<"Enter Binary Num: ";
    cin>>s;
	int n = s.length();
	int base = 1;
	int ans = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '1') {
			ans += base;
		}
		base *= 2;
	}
	cout << ans;
}




// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	string s;
//     cout<<"Enter Binary Num: ";
//     cin>>s;
// 	cout << stoi(s, 0, 2);
// }









// #include <iostream>
// using namespace std;

// int binaryToDecimal(int N) {
//     int decimal = 0, base = 1; // base = 2^0 initially

//     while (N > 0) {
//         int last_digit = N % 10;  // Extract last digit
//         decimal += last_digit * base; // Multiply by place value
//         base *= 2; // Move to the next power of 2
//         N /= 10; // Remove last digit
//     }

//     return decimal;
// }

// int main() {
//     int N;
//     cout << "Enter a binary number: ";
//     cin >> N;

//     cout << "Decimal Equivalent: " << binaryToDecimal(N) << endl;
//     return 0;
// }



