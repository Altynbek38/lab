#include <iostream>
using namespace std;
int main(){
    string object;
    int n, m;
    cin >> object >> n >> m;
    m = m - n + 1;
    string answer = object.substr(n, m);
    cout << answer;


    return 0;
}