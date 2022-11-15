#include <bits/stdc++.h>
using namespace std;
int digit(int n){
    if(n == 0){
        return 0;
    }
    else{
        return ((n % 10) / 2 + digit(n / 10));
    }


}

int main(){
    long long n;
    cin >> n;
    cout << digit(n);
    return 0;
}