#include <iostream>
#include <map>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    map <char, bool> mp;

    for(long long i = 0; i < m; i++){
        char k;
        cin >> k;
        mp[k] = true;
    }

    long long cnt = 0, sum = 0;
    for(long long i = 0; i < n; i++){
        if(mp[s[i]]){
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
