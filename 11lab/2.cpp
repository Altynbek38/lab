#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    set <int> s;

    for(int i = 0; i < n; i++){
        cin >> m;
        s.insert(m);
    }
    if(s.size() == n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}