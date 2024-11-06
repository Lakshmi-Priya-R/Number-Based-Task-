#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp1 = 0, temp2 = 1, f;
    cout << "Enter The Number:";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cout << temp1 << " ";
        f = temp1 + temp2;
        temp1 = temp2;
        temp2 = f;
    }
    
    return 0;
}
