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
    sort(v.rbegin(), v.rend());
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += v[i];
    }
    cout << sum;

    return 0;
}