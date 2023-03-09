#include <bits/stdc++.h>
using namespace std;
int main(){
    double n, x, y;
    cin >> n;
    vector <double> w;
    vector <double> h;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        w.push_back(x + y);
        h.push_back(x + y);
    }
    sort(w.begin(), w.end());
    for(int i = 0; i < w.size(); i++){
        for(int j = 0; j < h.size(); j++){
            if(w[i] == h[j]){
                cout << j + 1 << " ";
                h[j] = M_PI;
                continue;
            }
        }
    }
    return 0;
}