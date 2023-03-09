#include <bits/stdc++.h>
using namespace std;
double phone(double p, double q){
    return q / p;
}
int main(){
    double n, p, q;
    cin >> n;
    string s;
    vector <pair <string, double> > v;

    for(int i = 0; i < n; i++){
        cin >> s >> p >> q;
        v.push_back(pair <string, double>(s,phone(p, q)));
    }
    string ans;
    double mx = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i].second > mx){
            mx = v[i].second;
            ans = v[i].first;
        }
    }
    cout << ans;

    return 0;
}