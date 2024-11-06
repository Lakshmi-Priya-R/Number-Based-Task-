#include <iostream>
using namespace std;

int hcf(int a, int b) {
    if (b == 0)
        return a;
    else
        return hcf(b, a % b);
}


int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int result = hcf(hcf(a, b), c);

    cout << "HCF of " << a << ", " << b << ", and " << c << " is: " << result << endl;
    return 0;
}
