#include <iostream>
using namespace std;
int main(){
    long n, cnt = 1;
    cin >> n;
    long long a;
    cout << 1 << endl;
    for(int i = 1; i <= n; i++){
        a = cnt * 2;
        cnt = a;
        cout << a << endl;
    }
    // for(int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }


    return 0;
}


