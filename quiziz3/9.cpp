#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, h;
    char c;
    cin >> s >> h >> c;

    for(int i = 0; i < h.size(); i++){
        for(int j = 0; j < s.size(); j++){
            if(h[i] == s[j]){
                s[j] = c;
            }
        }
    }
    cout << s;


}