#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n;

    for(int i = 0; i < n; i++){
        int sum = 0, cnt = 0;
        cin >> m;
        for(int j = 0; j < m; j++){
            int k;
            cin >> k;
            if(k == 0){
                cnt++;
                k = 1;
            }
            sum += k;
        }
        if(sum == 0){
            cnt++;
        }
        cout << cnt << endl;
    }
    
    return 0;
}
