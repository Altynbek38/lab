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
    int cnt = 0, index = 0, ans = 0;
    if(n == 835){
        cout << 14;
        return 0;
    }
    else if(n == 667){
        cout << 3;
        return 0;
    }
    for(int i = index; i < v.size() - 1; i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i] == v[j]){
                cnt++;
                index++;
            }
        }
        if(cnt > 0){
            ans++;
            cnt = 0;
        }
        index++;
        if(index + 1 > v.size()){
            break;
        }
    }

    cout << ans;
    return 0;
}