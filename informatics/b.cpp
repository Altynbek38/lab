#include <iostream>
using namespace std;
int main(){
    long long n, m, index, d, ans;
    cin >> n >> m >> index;
    d = m - n;
    int sum = n;
    for(int i = 0; i < index - 1; i++){
        ans = sum + d;
        sum = ans;
    }
    cout << ans;

    return 0;
}