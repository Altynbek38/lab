#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v;
    vector <int> w;
    vector <int> u;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        v.push_back(k);
        if(k != 0){
            w.push_back(k);
        }
    }

    bool ok = 0;
    sort(w.begin(), w.end());
    for(int i = 1; i <= n; i++){
        ok = 0;
        for(int j = 0; j < w.size(); j++){
            if(i == w[j]){
                ok = 1;
                break;
            }
            else if(w[j] > i){
                break;
            }
        }
        if(!ok){
            u.push_back(i);
        }
    }
   
    sort(u.rbegin(), u.rend());
    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0){
            if(i + 1 == u[cnt]){
                v[i] = u[cnt + 1];
                int temp = u[cnt];
                u[cnt] = u[cnt + 1];
                u[cnt + 1] = temp;
                cnt++;
            }
            else{
                v[i] = u[cnt];
                cnt++;
            }
        }
        cout << v[i] << " ";
    }

    return 0;
}