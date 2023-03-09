#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y, n;
    cin >> n;
    vector <pair<int, int> > v;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        v.push_back(pair<int, int>(x, y));
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}
// printf("%.10f", x)

