#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt = 1, index = 0, mx = 0;
    char out;
    if(s.size() == 1){
        cout << s << " " << 1;
        return 0;
    }

    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i + 1]){
            cnt++;
        }
        else{
            if(cnt > mx){
                out = s[i];
                mx = cnt;
            }
            cnt = 1;
        }
    }
    if(cnt > mx){
        cout << s[s.size() - 1] << " " << cnt;
        return 0;
    }
    cout << out << " " << mx;

    return 0;
}