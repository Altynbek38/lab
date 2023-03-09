#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, string> mp;

    for(int i = 0; i < n; i++){
        bool ok = true;
        string s, t;
        cin >> s >> t;
        map <string, string> :: iterator it;
        for(it = mp.begin(); it != mp.end(); it++){
            if(it -> second == s){
                mp[it -> first] = t;
                ok = false;
            }
        }
        if(ok){
            mp[s] = t;
        }
    }
    map <string, string> :: iterator it;
    cout << mp.size() << endl;

    for(it = mp.begin(); it != mp.end(); it++){
        cout << it -> first << " " << it -> second << endl;
    }


    return 0;
}