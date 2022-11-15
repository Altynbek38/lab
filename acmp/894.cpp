#include <bits/stdc++.h>
using namespace std;
int main(){
    double s, r;
    cin >> s >> r;

    double s1 = r * r * 3.1415926535897932384626433832795;

    double s2 = s1 - s;

    double r1 = sqrt(s2 / 3.1415926535897932384626433832795);

    cout << fixed << r1;

}