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

    //vector <int> :: iterator it;
    v.erase(v.begin() + k);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}