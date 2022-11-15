#include <bits/stdc++.h>
using namespace std;
double power(double n, double m){
    double ans = 1;
    if(m < 0){
        m *= -1; 
        for(int i = 0; i < m; i++){
            ans *= n;
        }
        return 1 / ans;
    }
    for(int i = 0; i < m; i++){
        ans *= n;
    }
    return ans;
}
int main(){
    double n, m;
    cin >> n >> m;
    cout << power(n, m);
    return 0;
}