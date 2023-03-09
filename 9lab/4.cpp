#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> k;
    vector <int> v;
    vector <int> h;
    int cnt = 0, ans = 0;
    for(int i = 0; i < n; i++){
        cin >> m;
        if(m == k){
            cnt++;
            h.push_back(m);
        }
        v.push_back(m);
    }

    for(int i = 0; i < v.size(); i++){
        if(v[i] == k){
            ans++;
        }
    }

    cout << h.size();



    return 0;
}