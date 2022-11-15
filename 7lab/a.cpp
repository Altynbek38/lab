#include <bits/stdc++.h>
using namespace std;
int main(){
 	long long n, max, min;
    cin >> n;
    max = n * 6;
    min = n / 6;
    n = n % 6;
    if(n > 0){
        min += 7 - n;
    }
    cout << min << " " << max;
    
    return 0;
}