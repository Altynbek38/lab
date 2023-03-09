#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        long long a, b, c, d, e;
        cin >> a >> b >> c;
        if(c % 2 == 0){
            d = c / 2;
            e = c / 2;
        }
        else{
            d = c / 2;
            e = c / 2 + 1;
        }
        cout << a * e - b * d << endl;
    }

    return 0;
}