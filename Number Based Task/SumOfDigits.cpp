#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int add = 0;
    while (num != 0) {
        add = add + num % 10;
        num = num / 10;
    }
    return add;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The sum of digits is: " << sumOfDigits(num) << endl;
    return 0;
}


