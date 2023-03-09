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
    sort(v.rbegin(), v.rend());
    int cnt = 1;
    for(int i = 0; i < v.size() - 1; i++){
        if(v[i] != v[i + 1]){
            break;
        }
        cnt++;
    }
    cout << cnt;

    return 0;
}