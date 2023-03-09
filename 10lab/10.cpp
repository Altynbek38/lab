#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> k;
    vector <int> v;
    vector <int> u;

    for(int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
    }

    rotate(v.begin(), v.begin() + k, v.end());

    for(int i = 0; i < v.size(); i++){
        u.push_back(v[i]);
    }
    reverse(u.begin(), u.end());

    for(int i = 0; i < u.size(); i++){
        cout << u[i] << " ";
    }

    return 0;
}