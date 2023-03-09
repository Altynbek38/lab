#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 1;
    vector <int> v;

    while(n != 0){
        cin >> n;
        v.push_back(n);
    }

    for(int i = 1; i <= 9; i++){
        int cnt = 0;
        for(int j = 0; j < v.size(); j++){
            if(i == v[j]){
                cnt++;
            }
        }
        cout << cnt << " ";
    }
    return 0;
}