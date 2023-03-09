#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long cnt = 0, sum = 0, first;

    while(n > 9){
        sum = 0;
        while(n > 0){
            first = n % 10;
            sum += first;
            n /= 10;
        }
        n = sum;
        cnt++;
    }
    cout << sum << " " << cnt;

    return 0;
}