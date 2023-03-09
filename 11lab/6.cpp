#include <bits/stdc++.h>
using namespace std;
struct Kcd{
    int alpha;
    int beta;
    int kappa;
    
    void read(){ 
        cin >> alpha >> beta >> kappa;
    }
};
int OutCd(Kcd n){
    vector <int> u;
    for(int i = 1; i <= n.beta; i++){
        if(n.alpha % i == 0 && n.beta % i == 0){
            u.push_back(i);
        }
    }
    sort(u.rbegin(), u.rend());
    return u[n.kappa - 1];
}
int main(){;
    Kcd n;

    n.read();
    cout << OutCd(n);


    return 0;
}