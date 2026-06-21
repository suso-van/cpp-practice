#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<(n>0 ? "Positive" : "Not Positive")<<endl;
    cout<<(n%2==0 ? "Even" : "Odd")<<endl;
    return 0;
}