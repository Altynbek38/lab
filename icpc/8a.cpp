#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v, w, u;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        v.push_back(k);
        if(k != 0) w.push_back(k);
    }

    for(int i = 1; i <= n; i++){
        auto it = find(w.begin(), w.end(), i);
        if(it != w.end()){
            continue;
        }
        else{
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