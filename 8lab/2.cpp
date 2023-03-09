#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin >> n;
    vector <int> v;

    for(int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
    }
    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}