#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ar[100];
    int cnt = 0;
    int index = 0;

    for(int i = a; i <= b; i++){
        if(i % c == 0 && i % d ==0){
            cout << i << " ";
            ar[i - a - cnt] = i;
            index++;
        }
        else{
            cnt++;
        }
    }

    cout << endl;

    // for(int i = 0; i < index; i++){
    //     cout << ar[i] << " ";
    // }

    if(index % 2 == 1){
        cout << ar[index / 2];
    }
    else if(index % 2 == 0){
        cout << ar[index / 2 - 1] << " " << ar[index / 2];
    }


    return 0;
}