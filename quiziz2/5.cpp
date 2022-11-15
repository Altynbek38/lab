#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;

    int digit = 0, first = 0, sum = 0;
    for(int i = 0; n > 0; i++){
        digit = n % 10;
        sum += digit;
        first = digit;
        n /= 10;
    }

    sum -= first;

    if(first == sum % 10){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}