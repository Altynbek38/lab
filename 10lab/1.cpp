#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n, m;
    vector <string> v;
    vector <int> u;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s >> m;
        v.push_back(s);
        u.push_back(m);
    }
    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    for(int i = 0; i < n; i++){
        cout << v[i] << " " << u[i] << endl;
    }

    return 0;
}