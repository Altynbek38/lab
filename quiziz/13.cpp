#include <iostream>
using namespace std;
int main(){
    int n, a, d, c;
    cin >> n >> a >> d;

    c = a + (n  - 1) * d;
    int sum = 0;
    for(int i = a; i <= c ; i = i = i + d){
        sum = sum + i;
        cout << i << " ";
    }
        cout << endl;
        cout << "sum: " << sum ;

    return 0;
}