#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    vector <int> v;

    for(int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
    }

    sort(v.begin(), v.end());

    cout << v[v.size() - 1] - v[0];

    return 0;
}