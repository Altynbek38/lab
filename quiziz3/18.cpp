#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char c;
    vector <int> v;
    cin >> s >> c;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == c){
            v.push_back(i);
        }
    }
    if(v.size() == 1){
        cout << v[0];
    }
    else{
        cout << v[0] << " " << v[v.size() - 1];
    }

    return 0;
}