#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    bool val = true;
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            cout<<"NOT A PRIME NUMBER";
            val=false;
            break;
        }
    }
    if(val)
    {
        cout<<"IT'S PRIME";
    }
    return 0;
}