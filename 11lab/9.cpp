#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector <char> v;

    for(int i = 0; i < s.size(); i++){
        v.push_back(s[i]);
    }
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        int index = 0;
        int cnt = 1;
        for(int j = i + 1; j < v.size(); j++){
            if(v[i] == v[j]){
                cnt++;
                index++;
                v.erase(v.begin() + j);
            }
        }
        if(cnt % 2 == 1){
            ans++;
        }
        if(ans >= 2){
            cout << "JOJO";
            return 0;
        }
    }
    cout << "ZA WARUDO TOKI WO TOMARE";
    return 0;
}