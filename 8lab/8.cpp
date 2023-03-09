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

    int k;
    cin >> k;

    sort(v.begin(), v.end());

    for(int i = 0; i < k; i++){
        cout << v[i] << " ";
    }

    return 0;
}