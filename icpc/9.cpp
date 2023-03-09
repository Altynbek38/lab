#include <bits/stdc++.h>
using namespace std;

int Counting(int a, int b, long long l, long long r){
    int cnt = 0;
    for(int i = l; i <= r; i++){
        if(((i % a) % b) != ((i % b) % a)){
            cnt++;
        }
    }
    return cnt;
}



int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b, q;
        cin >> a >> b >> q;
        vector <int> v;
        for(int j = 0; j < q; j++){
            long long l, r, cnt = 0;
            cin >> l >> r;

            for(int k = l; k <= r; k++){
                if(((k % a) % b) != ((k % b) % a)){
                    cnt++;
                  
                }
            }
            v.push_back(cnt);
        }
        for(int j = 0; j < v.size(); j++){
            cout << v[i] << " ";
        }
        cout << endl;
    }




    return 0;
}