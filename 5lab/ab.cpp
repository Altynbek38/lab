#include <iostream>
using namespace std;
int main() {
    int n, a, b, c = 0, d = 0;
    cin >> n >> a >> b;
    int cnt = 0;
    while(n > c){
        c = d + a;
        d = c - b;
        cnt++;
    }
    
    cout << cnt;
    
    
    // put your code here
    return 0;
}