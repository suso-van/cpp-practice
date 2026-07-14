#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool x = true;
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            x = false;
            break;
        }
    }
    if(x){
        cout << n << " is a prime number." << endl;
    }
    else{
        cout << n << " is a composite number." << endl;
    }
    return 0;
}