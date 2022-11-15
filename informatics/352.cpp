#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 1;

    for(int i = 0; i < n; i++){
        ans = ans * 2;
    }
    cout << ans;

    return 0;
}