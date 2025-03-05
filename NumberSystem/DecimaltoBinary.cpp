#include <iostream>
#include <vector>
using namespace std;

void decimalToBinary(int N) {
    if (N == 0) {
        cout << "0";
        return;
    }

    vector<int> binary;  // Stores binary digits

    while (N > 0) {
        binary.push_back(N % 2);  // Store remainder (0 or 1)
        N /= 2;  // Divide N by 2
    }

    // Print binary digits in reverse order
    for (int i = binary.size() - 1; i >= 0; i--) {
        cout << binary[i];
    }
}

int main() {
    int N;
    cout << "Enter a decimal number: ";
    cin >> N;

    cout << "Binary Equivalent: ";
    decimalToBinary(N);

    return 0;
}
