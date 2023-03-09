#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b, f;
        string s = "";
        cin >> a >> b;
        f = a / b;
        int cnt = 1, sm = 0;
        for(int j = 1; j <= a; j++){
            if(cnt * f == j && cnt < b){
                cnt++;
                s += int(97 + sm);
                sm++;
            }
            else if(cnt * f == j && cnt >= b){
                cnt++;
                s += int(97 + sm);
            }
            else if(cnt * f > j){
                s += int(97 + sm);
            }
        }
        cout << s << endl;
    }

    return 0;
}