#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    string s;
    vector <int> v;
    for(int i = 0; i < n; i++){
        cin >> m >> s;
        sort(s.rbegin(), s.rend());
        v.push_back((int)s[i] - 96);
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    return 0;
}