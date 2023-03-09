#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;
    char k;
    cin >> a >> k >> b >> k >> c >> k >> d;
    if((a < 0 || a > 255) || (b < 0 || b > 255) || (c < 0 || c > 255) || (d < 0 || d > 255)){
        cout << 0;
    }
    else{
        cout << 1;
    }


    return 0;
}