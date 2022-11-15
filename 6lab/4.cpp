#include <iostream>
using namespace std;
int book(int n, int a[], int f){
    int truth = 0;
    for(int i = 0; i < n; i++){    
        if(f == a[i]){
            truth = 1;
        }
    }
    return truth;
}
int main(){
    int n , f;
    cin >> n;
    int a[n];


    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> f;
    
    int truth = book(n, a, f);

    if(truth == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}