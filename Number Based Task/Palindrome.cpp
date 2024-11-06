#include<iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    cout << " Enter the number:"<< endl;
    cin >> num;
    int Orginal = num;
    while(num!=0)
    {
        sum = sum * 10 + (num % 10);
        num = num / 10;
    }
    cout<<"Reversed Number is :" << sum <<endl;

    if(Orginal == sum )
        cout << " The given number is a Palindrome .";
        else
        cout << " The given number is not a Palindrome .";
    return 0;
}