#include <iostream>
#include <cmath>
using namespace std;

void armstrong(int a) {
    int n = a, sum = 0, numDigits = 0;

    while (n != 0) {
        n = n / 10;
        numDigits++;
    }

    n = a;  

    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n = n / 10;
    }

    if (sum == a) {
        cout << a << " is an Armstrong number." << endl;
    } else {
        cout << a << " is not an Armstrong number." << endl;
    }
}

int main() {
    int a;
    cout << "Enter the number: ";
    cin >> a;
    armstrong(a);

    return 0;
}
