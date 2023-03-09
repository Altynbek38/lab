#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    string s1, s2, z1, z2;
    vector <pair<string, string> > v;
    vector <pair<string, string> > w;

    for(int i = 0; i < n; i++){
        cin >> s1 >> s2;
        v.push_back(pair<string, string>(s1, s2));
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> z1 >> z2;
        w.push_back(pair<string, string>(z1, z2));
    }
    int detect = 0;
    for(int i = 0; i < w.size(); i++){
        for(int j = 0; j < v.size(); j++){
            if(w[i].first == v[j].first && w[i].second == v[j].second){
                cout <<"correct password" << endl;
                detect = 0;
                break;
            }
            else if(w[i].first == v[j].first){
                detect = 1;
            }
            else{
                if(detect == 1){
                    detect = 1;
                }
                else detect = 2;
            }
        }
        if(detect == 1){
            cout <<"password error" << endl;
        }
        else if(detect == 2){
            cout <<"login error" << endl;
        }
        detect = 0;
    }
    
    return 0;
}