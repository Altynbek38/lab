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

    int k;
    cin >> k;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == k){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";

    return 0;
}