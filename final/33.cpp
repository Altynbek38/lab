#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n, m;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        if(m % 7 == 0){
            cout << m << endl;
        }
        else{
            for(int i = m; i < 1000; i++){
                m++;
                if(m % 7 == 0){
                    cout << m << endl;
                    break;
                }
            }
        }
    }
    return 0;
}