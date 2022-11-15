#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;

    string s, d;

    cin >> s >> d;

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != d[i]){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}