#include <iostream>

using namespace std;
int main() {
    int n, sum = 0;
    int a[n];
    while(true){
        cin >> a[n];
        sum+=a[n];
        if(cin.get() == '\n')
 		break;
    }
    cout << sum;
    return 0;
}