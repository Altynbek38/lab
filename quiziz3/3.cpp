#include <bits/stdc++.h>
using namespace std;

int gc(int a,int b){
    int c;
    for(int i = 1; i <= b; i++){
        if(a % i == 0 && b % i == 0){
            c = i;
        }
    }
    return c;
}
int main(){
    int n, m;
    cin >> n;
    int a[n];
    vector <int> u;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            u.push_back(gc(a[i], a[j]));
        }
    } 
    sort(u.rbegin(), u.rend());
    cout << u[0];

    return 0;
}