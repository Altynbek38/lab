#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    string s;
    queue <string> q;
    cin >> n;
    for(int i = 0; i < n; i++){
        int l;
        cin >> l;
        if(l == 1){
            cin >> s;
            q.push(s);
            cout << q.front() << endl;
        }
        else{
            q.pop();
            if(!q.empty()){
                cout << q.front() << endl;
            }
            else{
                cout << "queue is empty" << endl;
            }
        }
    }

    return 0;
}