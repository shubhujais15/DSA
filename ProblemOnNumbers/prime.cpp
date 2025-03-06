#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime
    if (num == 2) return true;  // 2 is the only even prime

    for (int i = 2; i * i <= num; i++) { // Loop till sqrt(num)
        if (num % i == 0) {
            return false; // Found a factor, so not prime
        }
    }
    return true; // No factors found, so prime
}

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;

    if (isPrime(num))
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}
