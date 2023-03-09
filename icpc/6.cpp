#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector <char> w;
    string s;
    cin >> s;

    for(int i = 0; i < m; i++){
        char k;
        cin >> k;
        w.push_back(k);
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        bool ok = true;
        for(int j = i; j < n; j++){
            ok = false;
            for(int k = 0; k < m; k++){
                if(w[k] == s[j]){
                    ok = true;
                    break;
                }
            }
            if(!ok){
                break;
            }
            else{
                cnt++;
            }
        }
    }
    cout << cnt;
    
    return 0;
}