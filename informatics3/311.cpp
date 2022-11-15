#include <iostream>
using namespace std;
long double power(double n, int m){
    long double ans = 1;
    for(int i = 0; i < m; i++){
        ans *= n;
    }
    return ans;
}
int main(){
    double n;
    int m;
    cin >> n >> m;
    cout << power(n, m);
    return 0;
}