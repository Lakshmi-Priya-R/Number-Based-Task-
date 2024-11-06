#include <iostream>
using namespace std;

int sumOfSquaresOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;     
        sum = sum + digit * digit;    
        n /= 10;                 
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of squares of digits is: " << sumOfSquaresOfDigits(n) << endl;
    return 0;
}
