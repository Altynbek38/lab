#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int pos, mn = 10000;
        int m;
        cin >> m;
        vector <int> v;
        for(int j = 0; j < m; j++){
            int k;
            cin >> k;
            v.push_back(k);
        }
        for(int j = 0; j < v.size(); j++){
            bool ok = true;
            for(int l = j + 1; l < v.size(); l++){
                if(v[j] == v[l]){
                    v.erase(v.begin() + l);
                    ok = false;
                }
            }
            if(ok = true && v[j] < mn){
                mn = v[j];
                pos = j + 1;;
            }
        }
        if(mn == 10000){
            cout << "ZA WARUDO" << endl;
        }
        else{
            cout << pos << endl;
        }
        v.clear();
    }

    return 0;
}