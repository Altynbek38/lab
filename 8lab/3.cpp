#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
    }

    int k, l;
    cin >> k >> l;

    reverse(v.begin() + k, v.begin() + l + 1);

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    return 0;
}