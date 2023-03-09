#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    vector <int> v;
    vector <int> u;

    for(int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
    }

    bool rep = true;
    while(rep){
        rep = false;
        for(int i = 0; i < v.size(); i++){
            for(int j = i + 1; j < v.size(); j++){
                if(v[i] == v[j]){
                    v.erase(v.begin() + j);
                }
            }
        }
        for(int i = 0; i < v.size(); i++){
            for(int j = i + 1; j < v.size(); j++){
                if(v[i] == v[j]){
                    rep = true;
                    break;
                }
            }
            if(rep){
                break;
            }
        }
    }
    unique(v.begin(), v.end());

    do {
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }while(next_permutation(v.begin(), v.end()));

    return 0;
}