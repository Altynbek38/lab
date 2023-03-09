#include <bits/stdc++.h>
using namespace std;
bool Palindrome(vector <int> v){
    for(int i = 0; i < v.size(); i++){
        if(v[i] != v[v.size() - 1 - i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n, m;
    vector <int> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(), v.end());
    
    do{
        if(Palindrome(v)){
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            }
            return 0;
        }
    }while(next_permutation(v.begin(), v.end()));
    cout << "Impossible";
    return 0;
}