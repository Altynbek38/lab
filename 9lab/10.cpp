#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    vector <pair<string, int> > v;
    vector <pair<string, int> > w;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s >> m;
        v.push_back(pair<string, int>(s, m));
        w.push_back(pair<string, int>(s, m));
    }
    
    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i].first == v[j].first){
                v[i].second += v[j].second;
                v.erase(v.begin() + j);
            }
        }
        
    }
    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i].first == v[j].first){
                v[i].second += v[j].second;
                v.erase(v.begin() + j);
            }
        }
        
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}

