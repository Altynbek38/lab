#include <iostream>
using namespace std;

int main(){
    int a, b, c, mx, mn;
    cin >> a >> b >> c;
    int sum = 0;
    sum = a + b + c;
    mx = max(a, max(b, c));
    mn = min(a, min(b, c));
    b = sum - mx - mn;

    cout << mx << " " << b << " " << mn;

    return 0;
}