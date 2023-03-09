#include <bits/stdc++.h>
using namespace std;
int maxdigit(string s, int n, int m){
    if(n == s.size()){
        return m;
    }
    else{
        if((s[n] - '0') >= m){
            m = s[n] - '0';
        }
        return maxdigit(s, n + 1, m);
        }
}
int main(){
    string s;
    int n = 0, m = 0;
    cin >> s;
    cout << maxdigit(s, n, m);

    return 0;
}