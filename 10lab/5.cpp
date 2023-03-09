#include <bits/stdc++.h>
using namespace std;
bool sort_by_cnt(int a, int b){
    return a > b;
}
int main(){
    double n, m, k;
    string s;
    vector <pair <string, double> > v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        for(int j = 0; j < m; j++){
            cin >> s >> k;
            v.push_back(pair<string, double>(s, k));
        }
    }

    sort(v.begin(), v.end());

    int tot = 0, index = 0;
    for(int i = 0; i < v.size(); i++){
        tot += v[i].second;
    }
    bool rep = true;
    while(rep){
        rep = false;
        for(int i = 0; i < v.size(); i++){
            for(int j = i + 1; j < v.size(); j++){
                if(v[i].first == v[j].first){
                    v[i].second += v[j].second;
                    v.erase(v.begin() + j);
                }
            }
        }
        for(int i = 0; i < v.size() - 1; i++){
            if(v[i].first == v[i + 1].first){
                rep = true;
            }
        }
    }

    for(int i = 0; i < v.size(); i++){
        v[i].second = (v[i].second / tot) *100;
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}