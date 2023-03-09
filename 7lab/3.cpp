#include <bits/stdc++.h>
using namespace std;
int equal(int n, int m, int a[]){
    int ans;
    if(a[n - 1] == m){
        ans = -1;
        return -1;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return equal(n - 1, m, a);
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int m;
    cin >> m;
    int ans = equal(n, m, a);
    if(ans == -1){
        cout << "Yes";
        return 0;
    }
    cout << "No";

}