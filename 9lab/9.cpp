#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    vector <string> v;
    for(int i = 0; i < n; i++){
        cin >> s;
        v.push_back(s);
    }
    bool user = false;
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < i; j++){
            if(v[i] == v[j]){
                user = true;
            }
        }
        if(user){
            cout << "user already exists" << endl;
        }
        else{
            cout << "new user added" << endl;
        }
        user = false;
    }

    return 0;
}