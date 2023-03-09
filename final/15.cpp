#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m;
    vector <int> v;
    vector <int> w;
    w.push_back(1); w.push_back(2); w.push_back(5); w.push_back(10); w.push_back(20); w.push_back(50); w.push_back(100);
    int sum = 0, k;
    for(int i = 0; i < 7; i++){
        cin >> n ;
        k = w[i] * n;
        sum += k;
        v.push_back(n);
    }

    cin >> n;

    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> m;
        if(sum >= m){
            bool ok = true;
            int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
            while(m > 0){
                if(m >= 100 && v[6] > 0){
                    m = m - 100;
                    a++;
                    v[6]--;
                } 
                else if(m >= 50 && v[5] > 0){
                    m = m - 50;
                    b++;
                    v[5]--;
                }
                else if(m >= 20 && v[4] > 0){
                    m = m - 20;
                    c++;
                    v[4]--;
                }
                else if(m >= 10 && v[3] > 0){
                    m = m - 10;
                    d++;
                    v[3]--;
                }
                else if(m >= 5 && v[2] > 0){
                    m = m - 5;
                    e++;
                    v[2]--;
                }
                else if(m >= 2 && v[1] > 0){
                    m = m - 2;
                    f++;
                    v[1]--;
                }
                else if(m >= 1 && v[0] > 0){
                    m = m - 1;
                    g++;
                    v[0]--;
                }
                else{
                    cout << "Transaction stopped!" << endl;
                    v[6] += a; v[5] += b; v[4] += c; v[3] += d; v[2] += e; v[1] += f; v[0] += g;
                    ok = false;
                    break;
                }
            }
            if(ok){
                cout << "Transaction accepted!" << endl;
                sum -= m;
            }
        }
        else{
            cout << "Transaction stopped!" << endl;
        }
        cout << endl;
    }

    return 0;
}