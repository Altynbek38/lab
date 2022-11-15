#include <iostream>
using namespace std;

int main(){

    int n;

    cin >> n;

    int mx=0;

    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        mx= max (a,mx);
    }
    cout << mx;





    return 0;
}