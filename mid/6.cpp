#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] == a[j]){
                mod = a[i];
                cnt++;
            }
        }
        cnt = 0;
    }
    cout << mod;
    return 0;
}