#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m;
    vector <int> v;
    vector <int> u;
    vector <int> ans;

    for(int i = 0; i < n; i++){
        cin >> k;;
        v.push_back(k);
    }

    for(int i = 0; i < m; i++){
        cin >> k;
        u.push_back(k);
    }

    v.erase(unique(v.begin(), v.end()), v.end());
    u.erase(unique(u.begin(), u.end()), u.end());
    int first = 0, second = 0;

    for(int i = 0; i < v.size() + u.size(); i++){
        if(i % 2 == 0){
            for(int j = first; j < v.size(); j++){
                ans.push_back(v[j]);
                break;
            }
            first++;
        }
        else{
            for(int k = second; k < u.size(); k++){
                ans.push_back(u[k]);
                break;
            }
            second++;
        }
    }

    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}