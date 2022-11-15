#include <iostream>

using namespace std;

int main()
{
    int n, m, i, index = 0;
    cin >> n >> m;
    int a[n];
    int minsum;
    for (i = 1; i <= n; i++){
            cin >> a[i];
            if(a[1] >= m){
                index = 1;
            }else{
                index = n;
            }
    }
    for (i = 2; i <= n; i++){
            if(a[i] > m){
                index = i - 1;
                break;
            }
    }
    cout << index;
    
}
    