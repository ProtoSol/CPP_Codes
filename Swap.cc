#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter the two numbers a and b : "<< endl;
    cin >> a >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << "Numbers after swapping are as follows a = " << a << " b = " << b << endl;
    return 0;
}