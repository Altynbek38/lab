#include <bits/stdc++.h>
using namespace std;
int main(){
    long double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double ans = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;

    cout << fixed <<ans;
    return 0;
}