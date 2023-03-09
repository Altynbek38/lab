#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b, q;
        cin >> a >> b >> q;
   

        for(int j = 0; j < q; j++){
            long long l, r, cnt = 0;
            cin >> l >> r;

            for(int k = l; k <= r; k++){
                if(((k % a) % b) != ((k % b) % a)){
                    cnt++;
                }
            }
            cout << cnt << " ";
        }
        
        cout << endl;
    }

    return 0;
}