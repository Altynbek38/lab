#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int cnt = 0;
    int ans = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size() - i; j++){
            if(s[j] != s[s.size() - i - 1 - j]){
                ans = s.size() - i;
                cnt = 1;
            }
        }
        if(cnt == 1){
            break;
        }
    }
    cout << ans;
    return 0;
}