#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, h;
    cin >> s >> h;
    string k = h;
    while(s.size() > h.size()){
        h += k;
    }

    for(int i = 0; i < s.size(); i++){
        s[i] = (int)s[i] + ((int)h[i] - 97);
        cout << s[i] << endl;
        if((int)s[i] > 122){
            s[i] = (int)s[i] - 26;
        }
    }
    cout << s;
    return 0;
}