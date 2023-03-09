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
    int k, l;
    cin >> k >> l;

    v.insert(v.begin() + k, l);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}