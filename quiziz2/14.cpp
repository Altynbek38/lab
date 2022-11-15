#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n];
    int m = n / 2;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }    
     
    int b[m];
    int c[n];

    for(int i = 0; i < n; i++){
        c[i] = a[i];
    }
    reverse(c, c + n);
    int element = 0, sum = 0;
    for(int i = 0; i < m; i++){
        int k = 10000;
        for(int j = 0; c[i] != 0; j++){
            sum  += element * k;
            k /= 10;
            element = c[i] % 10;
            c[i] /= 10;
        }

        for(int l = 0; element = 0; l++){
            sum = sum / 10;
            element = sum % 10;
        }
        b[i] = sum;
    }

    for(int i = 0; i < m; i++){
        if(a[i] != b[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" << endl;
    
    for(int i = 0; i < m; i++){
        cout << b[i] << " ";
    }

    for(int i = 0; i < n; i++){
        cout << c[i] << " ";
    }
   return 0;
}