#include <bits/stdc++.h>
using namespace std;
void number(int n){
    if(n){
        number(n - 1);
    }
    else 
        return;
    cout << n << " ";
}
int main(){
    int n;
    cin >> n;
    number(n);
    return 0;
}