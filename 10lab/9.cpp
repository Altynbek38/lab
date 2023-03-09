#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    vector <int> v;
    vector <int> u;

    for(int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
        u.push_back(m);
    }

    reverse(u.begin(), u.end());

    for(int i = 0; i < v.size(); i++){
        if(v[i] == u[i]){
            cout << "OK" << endl;
         }
        else{
            cout << "Instead of "<< v[i] <<" here was " << u[i] <<endl;
        }
    }

    return 0;
}