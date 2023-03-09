#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l;
    vector <pair<int, int> > v;
    vector <int> u;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> k >> l;
        v.push_back(make_pair(k, l));
        
    }

    for(int i = 0; i < v.size(); i++){
        int cnt = 0;
        for(int j = 0; j < i; j++){
            if((v[i].first == v[j].first && v[i].second == v[j].second) || (v[i].first == v[j].second && v[i].second == v[j].first)){
                cnt++;
            }
        }
        cout<<cnt;
       // u.push_back(cnt);
    }

   /* for(int i = 0; i < u.size(); i++){
        cout << u[i] << endl;
    }

    return 0;*/
}