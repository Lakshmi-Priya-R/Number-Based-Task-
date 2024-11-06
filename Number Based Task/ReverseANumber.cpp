#include<iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    cout << " Enter the number:"<< endl;
    cin >> num;
    while(num!=0)
    {
        sum = sum * 10 + (num % 10);
        num = num / 10;
        cout<<sum<<endl;
    }
    return 0;

}