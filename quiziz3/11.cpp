#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ans = 0;
    int index = 0;
    for(int i = s.size() - 1; i >= 0; i--){
        ans += ((int)s[i] - '0') * pow(2, index);
        index++;
    }
    cout << ans;
}