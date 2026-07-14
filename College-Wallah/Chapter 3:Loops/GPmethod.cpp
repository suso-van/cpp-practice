#include<iostream>
using namespace std;
int main(){
    int n,a,r;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the common ratio: ";
    cin >> r;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a * r;
    }
    return 0;
}