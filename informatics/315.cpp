#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0, p;
    for(int i = 1; i <= n; i++){
        p = i * i;
        sum = sum + p;
    }
    cout << sum;

    return 0;
}