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

    int cnt = 0, xr = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            xr = v[i] ^ v[j];
            for(int k = 0; k < n; k++){
                if(v[k] == xr){
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}