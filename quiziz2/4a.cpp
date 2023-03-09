#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int mod[n], num[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = i; j < n; i++){
            if(a[i] == a[j]){
                cnt++;
            }
        }
        mod[i] = a[i];
        num[i] = cnt;
    }

    int ans[100];
    int index = 0;
    int mx = num[0];
    for(int i = 0; i < n; i++){
        if(num[i] > mx){
            mx = num[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(num[i] == mx){
            ans[i - index] = mod[i];
        }
    }
    int size = sizeof(ans) / sizeof(ans[0]);

    sort(ans, ans + size);

    for(int i = size - 1; i >= 0; i--){
        cout << ans[i] << " ";
    }


    return 0;
}