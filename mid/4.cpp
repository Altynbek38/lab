#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;

    int res = 0, sum = 0, first = 0;
    for(int i = 0; n != 0; i++){
        res = n % 10;
        sum = sum + res;
        first = res;
        n = n / 10;
    }
 
    sum = sum - first;

    if(first == sum % 10){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}