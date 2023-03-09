#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string h;

    for(int i = 0; i < s.size(); i++){
        h += s[i];
    }

    int cnt = 0;
    for(int i = 0; i < s.size() - 1; i++){
        cnt = 0;
        for(int j = i + 1; j < s.size(); j++){
            if(s[i] == h[j]){
                cnt++;
            }
        }
        if(cnt > 0){
            cout << s[i];
        }
    }

    cout << endl;


    return 0;
}