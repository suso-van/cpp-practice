#include<iostream>
using namespace std;
int main(){
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    float a = 3.14 * r * r;
    cout << "The area of the circle is: " << a << endl;
    return 0;
}