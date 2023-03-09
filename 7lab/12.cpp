#include <bits/stdc++.h>
using namespace std;
int pal(string s, int n, int m){
    if(s[n] != s[m]){
        return 0;
    }
    else if(n == m){
        return 1;
    }
    else{
        return pal(s, n + 1, m - 1);
    }
}
int main(){
    string s;
    cin >> s;
    int n = 0, m = s.size() - 1;
    int ans = pal(s, n, m);
    if(ans == 0){
        cout << "No";
        return 0;
    }
    cout << "Yes";
}