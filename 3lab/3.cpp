#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int mx = -1000000000 ;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        mx = max(a[i], mx);
    }
        cout << mx;



    return 0;
}