#include <iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    int n, m;

    for(int i = 0; i < k; i++){
        cin >> n >> m;
        cout << 19*m + (n + 239)*(n + 366) / 2 << endl ;
    }
    
    
    
    
    return 0;
}


