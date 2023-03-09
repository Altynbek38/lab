#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    char t;
    cin >> t;
    vector <int> v;
    for(int i = 0; i < s.size(); i++){
        if(t == s[i]){

            v.push_back(i);
        }
    }

    cout << v[0] << " " << v[v.size() - 1];

    

//hefkfhk4fj5

    return 0;
}