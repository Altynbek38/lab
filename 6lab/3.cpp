#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[100100],b[100100];
ll equal(){
    ll cnt=0;
    sort(a, a + n);
    sort(b, b + n);
    ll fa=0,fb=0;
    while(1){
        if(fa==n||fb==n)break;
        if(a[fa]==b[fb]){
            fa++;
            fb++;
            cnt++;
        }
        else if(a[fa]>b[fb]){
            fb++;
        }
        else if(a[fa]<b[fb]){
            fa++;
        }
    }
    return cnt;
}
int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    ll cnt = equal();

    cout << cnt;
}