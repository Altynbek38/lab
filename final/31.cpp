#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int an = 0, cnt = 0;
        int m;
        cin >> m;
        int a = 3 * m, b = 3 * m, c = 3 * m;
        string s;
        vector <string> v;
        vector <string> u;
        vector <string> w;
        for(int j = 0; j < m; j++){
            cin >> s;
            v.push_back(s);
        }
        for(int j = 0; j < m; j++){
            cin >> s;
            u.push_back(s);
            if(find(v.begin(), v.end(), s) != v.end()){
                cnt++;
            }
        }
        for(int j = 0; j < m; j++){
            cin >> s;
            if(find(v.begin(), v.end(), s) != v.end() && find(u.begin(), u.end(), s) != u.end()){
                c -= 3;
                a -= 3;
                b -= 3;
                an++;
            }
            else if(find(v.begin(), v.end(), s) != v.end()){
                c -= 2;
                a -= 2;
            }
            else if(find(u.begin(), u.end(), s) != u.end()){
                c -= 2;
                b -= 2;
            }
        }
        cnt -= an;
        a = a - cnt * 2;
        b = b - cnt * 2;
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}