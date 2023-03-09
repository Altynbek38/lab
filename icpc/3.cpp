#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.rbegin(), v.rend());

    int cnt = 0;
    for(int i = 0; i < v.size(); i = i + 2){
        cnt += v[i] - v[i + 1];
    }
    cout << cnt;
    return 0;
}