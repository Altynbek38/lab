#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string h = "ABCD";
    for(int i = 0; i < h.size(); i++){
        int cnt = 0;
        for(int j = 0; j < s.size(); j++){
            if(h[i] == s[j]){
                cnt++;
            }
        }
        if(cnt != 0){
            cout << h[i] << " " << cnt << endl;
        }
    }


    return 0;
}