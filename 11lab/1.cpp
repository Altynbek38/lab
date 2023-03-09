#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector <string> v = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    vector <int> u = {7, 6, 5, 4, 3, 2, 1};
    for(int i = 0; i < v.size(); i++){
        if(s == v[i]){
            cout << u[i];
        }
    }


    return 0;
}