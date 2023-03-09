#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> v;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    int m;
    cin >> m;
    vector <pair <string, string> > w;
    for(int i = 0; i < m; i++){
        string s, t;
        cin >> s >>  t;
        w.push_back(make_pair(s, t));
    }

    string s;
    cin >> s;
    vector <string> u;
    for(int i = 0; i < w.size(); i++){
        if(s == w[i].first){
            for(int j = 0; j < v.size(); j++){
                if(w[i].second == v[j]){
                    u.push_back(w[i].second);
                }
            }
        }
        else if(s == w[i].second){
            for(int j = 0; j < v.size(); j++){
                if(w[i].first == v[j]){
                    u.push_back(w[i].first);
                }
            }
        }
    }
    sort(u.begin(), u.end());
    cout << u.size() << endl;
    for(int i = 0; i < u.size(); i++){
        cout << u[i] << " ";
    }

    return 0;
}