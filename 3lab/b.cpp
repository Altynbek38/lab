#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];

    int sum = 0, ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i]*2 == 0){
            sum++;
        }
        else if(a[i]*2 == 2){
            ans++;
        }
    }
    if(sum > ans){
        cout << ans;
    }
    else if(sum < ans){
        cout << sum;
    }

    return 0;
}