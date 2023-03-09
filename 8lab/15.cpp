#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector <char> v;
    for(int i = 0; i < s.size(); i++){
        if((int)s[i] < 97){
            s[i] = (int)s[i] + 32;
        }
        v.push_back(s[i]);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}