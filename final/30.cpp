#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int cnt = 0;
        int m;
        cin >> m;
        int a[m];
        int mx = 0;
        for(int j = 0; j < m; j++){
            cin >> a[j];
            if(a[j] > mx){
                mx = a[j];
            }
        }
        int mn = 0;
        for(int j = 0; j < m; j++){
            if(a[j] == mx && cnt == 0){
                cnt++;
            }
            else if(a[j] == mx && cnt > 0){
                mn = a[j];
            }
            if(a[j] > mn && a[j] < mx){
                mn = a[j];
            }
        }
        for(int j = 0; j < m; j++){
            if(a[j] == mx){
                cout << a[j] - mn << " ";
            }
            else{ 
                cout << a[j] - mx << " ";
            }
        }
        cout << endl;        
    }



    return 0;
}