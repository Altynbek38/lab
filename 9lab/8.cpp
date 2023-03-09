#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    map <string, int> m;

    for(int i = 0; i < n; i++){
        cin >> s;
        m.insert(pair <string, int> (s, i + 1));
    }

    map <string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}