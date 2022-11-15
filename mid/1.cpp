#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int cnt = 0, sum = 0;
    sort(a, a + n);

    for(int i = 0; i < n - 1; i++){
        if(a[i + 1] == a[i] + 1){
            cnt = 0;
        }
        else{
            cnt = abs(a[i] - a[i + 1]) - 1;
        }
        sum = sum + cnt;
    }

    cout << sum;

    return 0;
}