#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter The Numbers : " << endl;
    cin >> a >> b;
    if (a < b)
    {
        cout << "A is smaller in size" << endl;
    }
    else if (a == b)
    {
        cout << "A is equal to B";
    }
    else
    {
        cout << "A is greater than B" << endl;
    }
    if (a == b){
        cout << "This works somehow";
    }

    return 0;
}
