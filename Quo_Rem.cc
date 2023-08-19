#include <iostream>
using namespace std;
int main(){
    int div,dis,quo,rem;
    cout << "Enter the divident :" << endl;
    cin >> div;
    cout << "Enter the divisor :" << endl;
    cin >> dis;
    quo = div / dis;
    rem = div % dis;
    cout << "The Quotient is " << quo << " and the Remainder is " << rem << endl;
    return 0;
}