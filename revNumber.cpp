#include<iostream>
#include<math.h>
using namespace std;
int reversing(int rev){
        int ans = 0;
        int i = 0;
        while(rev!=0){
            int digit = rev%10;
            cout << "Digit is " << digit << endl;
            ans = (ans*10) + digit;
            cout << "Ans is = " << ans << endl;
            rev = rev/10;
            i++; 
        }
        return ans;
    }
int main()
{
    int x = -123;
    int out;
        if(x > 0){
            out = reversing(x);
        }
        if(x < 0){
            x = ~x + 1;
            out = reversing(x);
            out = ~out + 1;
        }
    cout << out;
    return 0;
}