#include <bits/stdc++.h>
using namespace std;

void print(int n, int a[], int b[]){
    int ans[n];
    for(int i = 0; i < n; i++){
        ans[i] = abs(a[i] - b[i]);
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    print(n, a, b);

    return 0;
}