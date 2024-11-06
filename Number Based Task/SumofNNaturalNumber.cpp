#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum = sum + i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is: " << sumOfNaturalNumbers(n) << endl;
    return 0;
}
