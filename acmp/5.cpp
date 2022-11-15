#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int three = 0, four = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 1){
            cout << a[i] << " ";
            three++;
        }
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            cout << a[i] << " ";
            four++;
        }
    }
    cout << endl;

    if(three > four){
        cout << "NO";
    }
    else{
        cout << "YES";
    }



    return 0;
}