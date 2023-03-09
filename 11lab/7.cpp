#include <bits/stdc++.h>
using namespace std;
struct Bonus{
    string name;
    int date;
    string ans;
    void read(){
        cin >> name >> date;
    }

    void show(){
        cout << name << " " << ans << endl;
    }

};

bool sort_by_name(Bonus a, Bonus b){
    return a.name < b.name;
}

int main(){
    int n;
    cin >> n;
    Bonus m;
    vector <Bonus> v;

    for(int i = 0; i < n; i++){
        m.read();
        m.ans = "";
        v.push_back(m);
    }

    for(int i = 0; i < v.size() - 1; i++){
        sort(v.begin(), v.end(), sort_by_name);
    }

    // cout << "=================" << endl;

    // for(int i = 0; i < v.size(); i++){
    //     v[i].show();
    // }

    bool rep = true;
    while(rep){
        rep = false;
        for(int i = 0; i < v.size(); i++){
            int cnt = 0;
            int index = 0;
            for(int j = i + 1; j < v.size(); j++){
                if(v[i].name == v[j - index].name){
                    if(v[i].date != v[j - index].date){
                        cnt++;
                    }
                    index++;
                    v.erase(v.begin() + j - index);
                }
            }
            //cout << cnt << endl;
            if(cnt >= 2 || v[i].ans == "+1"){
                v[i].ans = "+1";
            }
            else{
                v[i].ans = "NO BONUS";
            }
        }
        for(int i = 0; i < v.size() - 1; i++){
            if(v[i].name == v[i + 1].name){
                rep = true;
            }
        }
    }

    for(int i = 0; i < v.size(); i++){
        v[i].show();
    }

    return 0;
}