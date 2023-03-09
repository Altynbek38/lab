#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector <int> v(n);

    for(int i = 0; i < m; i++){
        char k;
        cin >> k;
        for(int j = 0; j < n; j++){
            if(s[j] == k){
                v[j]++;;
            }
        }
    }

    long long cnt = 0, sum = 0;
    for(int i = 0; i < n; i++){
        if(v[i] != 0){
            cnt++;
        }
        else{
            sum += (cnt * (cnt + 1)) / 2;
            cnt = 0;
        }
    }
    sum += (cnt * (cnt + 1)) / 2;
    cout << sum;
}
