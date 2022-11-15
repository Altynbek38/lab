#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int m =  s.size();
    int n = (s.size() + 1) / 2;

    for(int i = n; i < m; i++){
        cout << s[i];
    }

    for(int i = 0; i < n; i++){
        cout << s[i];
    }

    return 0;
}

