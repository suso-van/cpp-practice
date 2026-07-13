#include<iostream>
using namespace std;
int main(){
    int n,a,d;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the common difference: ";
    cin >> d;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a + d;
    }
    return 0;
}
