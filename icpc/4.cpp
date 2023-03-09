#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h, m;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> h >> m;
        m = 60 - m;
        h = 24 - h - 1;
        h = 60 * h;
        h += m;
        cout << h << endl;
    }

    return 0;
}