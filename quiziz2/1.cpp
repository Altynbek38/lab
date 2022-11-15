#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int left_sum = 0, right_sum = 0;
    int left_cnt = 0, right_cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            left_sum += a[i];
            left_cnt++;
        }
        else if(a[i] % 2 == 1){
            right_sum += a[i];
            right_cnt++;
        }
    }

    cout << "Left hand magic power: " << left_sum * left_cnt << endl;
    cout << "Right hand magic power: " << right_sum * right_cnt << endl; 
}