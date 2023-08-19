#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter The Number of Terms To Be Printed :" << endl;
    cin >> n;
    int temp = 0;
    int sum = 1;
    cout << "0 1 ";

    for (int i = 0; i < n; i++)
    {
        int nextSum = temp + sum;
        cout << nextSum << " ";
        temp = sum;
        sum = nextSum;
    }
    
    return 0;
}