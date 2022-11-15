#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, x;
    cin >> n >> x;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int sum = 0;
    int mx = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] >= mx){
            mx = a[i];
        }
    }
    
    sort(a, a + n);

    for(int i = 0; i < x; i++){
        for(int j = n - 1; j >= 0; j--){
            if(a[j] >= mx){
                sum += a[j];
                a[j]--;
                mx = a[j];
                sort(a, a + n);
                break;
            }
            // else if(a[j] == mx){
            //     sum += a[j];
            //     a[j]--;
            //     mx = a[j];
            //     sort(a, a + n);
            //     break;
            // }
        }
    }

    cout << sum;

    return 0;
}