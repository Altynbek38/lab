#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 1;
    vector <int> v;
    while(n != 0){
        cin >> n;
        v.push_back(n);
    }

    for(int i = 0; i < (v.size() - 1)/ 2; i++){
        cout << v[i] + v[v.size()- 2 - i] << " ";   
    }
    if(v.size() % 2 == 0){
        cout << v[v.size() / 2] << " ";
    }
    return 0;
}