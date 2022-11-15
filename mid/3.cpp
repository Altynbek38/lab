#include <bits/stdc++.h>
using namespace std;


int main(){
int x, y;
cin >> x;
int arr[100000];
for(int i = 0; i < x;i++){
        cin >> y;
        arr[y - 1]++;
    }
    int mx = 0;
    for(int i = 0;i < 10000;i++){
        if(arr[mx] < arr[i]){
            mx = i;
        }   
    }
    for(int i = 9999;i >= 0;i--){
        if(arr[i] == arr[mx]){
            cout << i + 1 << " ";
        }
    }
}