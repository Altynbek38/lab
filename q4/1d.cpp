#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, h;
    cin >> s >> h;
    vector <char> v;
    vector <char> w;
    vector <int> u;

    for(int i = 0; i < s.size(); i++){
        v.push_back(s[i]);
    }

    for(int i = 0; i < h.size(); i++){
        w.push_back(h[i]);
    }
    bool ok = true;
    for(int i = 0; i < s.size(); i++){
        ok = true;
        if(v[i] == w[0]){
            for(int j = 0; j < w.size(); j++){
                if(v[i+j] != w[j]){
                    ok = false;
                    break;
                }
            }
            if(ok){
                cout << i << " ";
            }
        }
    }

    return 0;
}
