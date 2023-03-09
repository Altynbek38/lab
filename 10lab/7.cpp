#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k;
    string s, h;
    map <pair<pair<string, int>, pair<string, int> >, int > mp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s >> m >> h >> k;
        //mp[pair<pair<string, int>(s, m), pair<string, int>(h, k)>] = m + k;
        mp[make_pair(make_pair(s,m),make_pair(h,k))] = m + k;
    }

    map <pair<pair<string, int>, pair<string, int> >, int > :: iterator it;

    for(it = mp.begin(); it != mp.end(); it++){
        cout << it -> first.first.first << " and " << it -> first.second.first << " " << it -> second << endl;
    }
    return 0;
}