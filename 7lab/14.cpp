#include <bits/stdc++.h>
using namespace std;
string cheat(int a[], int n, int m, int j, int k, int cnt){
    if(a[j] <= m || (a[k] - a[j]) <= m){
        cnt++;
        if(cnt == 2){
            return "cheater";
        }
        else{
            return cheat(a, n, m, j + 1, k + 1, cnt);
        }
    }
    else if(k == n - 1){
        return "no";
    }
    else{
        return cheat(a, n, m, j + 1, k + 1, cnt);
    }
}
int main(){
    int n, m;
    cin >> n  >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int j = 0, k = 1, cnt = 0;
    cout << cheat(a, n, m, j, k, cnt);

    return 0;
}