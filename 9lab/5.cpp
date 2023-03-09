#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string h;
    vector <string> v;

    for(int i = 0; i < n; i++){
        cin >> h;
        v.push_back(h);
    }
    v.push_back("ag");
    sort(v.begin(), v.end());
    int cnt = 1, ans = 0;
    for(int i = 0; i < v.size() - 1; i++){
        if(v[i] == v[i + 1]){
            cnt++;
            // cout << cnt << endl;
        }
        else{
            if(cnt == 3){
                ans++;
            }
            cnt = 1;
        }
    }
    cout << ans;

    return 0;
}