#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; 
    cin >> n;
    map <long long, long long> mp;
    vector <long long> v(n);

    for(int i = 1; i <= n; i++){
        v[i - 1] = i;
    }

    for(int i = 1; i <= n; i++){
        long long k;
        cin >> k;
        mp[i] = k;
        if(k != 0){
            v[k - 1] = 0;
        }
    }

    sort(v.begin(), v.end());

    long long sm = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] != 0){
            break;
        }
        sm++;
    }

    v.erase(v.begin(), v.begin() + sm);

    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }

    // cout << endl;
    long long cnt = 0;
    for(int i = 1; i <= n; i++){
        if(mp[i] == 0 && v[cnt] != i){
            mp[i] = v[cnt];
            cnt++;

        }
        else if(mp[i] == 0 && v[cnt] == i){
            mp[i] = v[cnt + 1];
            long long temp = v[cnt];
            v[cnt] = v[cnt + 1];
            v[cnt + 1] = temp;
            cnt++;
        }
    }

    for(int i = 1; i <= n; i++){
        if(mp[i] == i){
            mp[i] = mp[i + 1];
            long long temp = mp[i];
            mp[i] = v[i+ 1];
            mp[i + 1] = temp;
        }
        cout << mp[i] << " ";
    }

    return 0;
}