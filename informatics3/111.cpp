#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cin >> s >> n;

    if(s == "North"){
        cout << 0 << " " << n;
    }
    else if(s == "South"){
        cout << 0 << " " << -1 * n;
    }
    else if(s == "West"){
        cout << -1 * n << " " << 0;
    }
    else if(s == "East"){
        cout << n << " " << 0;
    }
    return 0;
}