#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        bool ok = true;
        int sum = 0;
        int m;
        cin >> m;
        char a[m];
        for(int j = 0; j < m; j++){
            ok = true;
            cin >> a[j];
            for(int k = 0; k < j; k++){
                if(a[k] == a[j]){
                    ok = false;
                    break;
                }
            }
            if(ok){
                sum += 2;
            }
            else{
                sum += 1;
            }
        }
        cout << sum << endl;
    }



    return 0;
}