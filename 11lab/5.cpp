#include <bits/stdc++.h>
using namespace std;
struct Student{
    string name;
    void read(){
        cin >> name;
    }
};
int main(){
    int n;
    cin >> n;
    vector <Student> v;
    vector <char> u;
    Student s;
    for(int i = 0; i < n; i++){
        s.read();
        v.push_back(s);
    }
    string nw = v[0].name;
    for(int i = 0; i < nw.size(); i++){
        int cnt = 0;
        for(int j = 1; j < v.size(); j++){
            for(int k = 0; k < v[j].name.size(); k++){
                if(nw[i] == v[j].name[k]){
                    u.push_back(nw[i]);
                    cnt++;
                }
            }
            if(cnt < n - 1){
                u.erase(remove(u.begin(), u.end(), nw[i]), u.end());
            }
        }
    }
    set <char> st;
    set <char> :: iterator it;
    for(int i= 0; i < u.size(); i++){
        st.insert(u[i]);
    }
    if(st.empty()){
        cout << "NO COMMON CHARACTERS";
        return 0;
    }
    for (it = st.begin(); it != st.end(); ++it){
        cout << *it << ' ';
    }
    return 0;
}