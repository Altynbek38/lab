#include <bits/stdc++.h>
using namespace std;
struct MaxPoint{
    string name;
    double point;

    void read(){
        cin >> name >> point;
    }
    void show(){
        cout << name << " " << point <<'%' << endl;
    }
};

double Total(vector <MaxPoint> v){
    double total = 0;
    for(int i = 0; i < v.size(); i++){
        total += v[i].point;
    }
    return total;
}

// bool sort_by_point(MaxPoint a, MaxPoint b){
//     return a.point > b.point;
// }

bool sort_by_point(MaxPoint a, MaxPoint b){
    if(a.point == b.point){
        return a.name > b.name;
    }
    return a.point > b.point;
}

double gpa(double pint, double total){
    return pint = (pint / total) * 100;
}

int main(){
    double n;
    cin >> n;
    vector <MaxPoint> v;
    MaxPoint id;


    for(int i = 0; i < n; i++){
        id.read();
        v.push_back(id);
    }
    double total = Total(v);

    bool rep = true;
    while(rep){
        rep = false;
        for(int i = 0; i < v.size(); i++){
            for(int j = i + 1; j < v.size(); j++){
                if(v[i].name == v[j].name){
                    v[i].point += v[j].point;
                    v.erase(v.begin() + j);
                }
            }
        }
        for(int i = 0; i < v.size() - 1; i++){
            if(v[i].name == v[i + 1].name){
                rep = true;
            }
        }
    }

 
    for(int i = 0; i < v.size(); i++){
        v[i].point = gpa(v[i].point, total);
    }

    for(int i = 0; i < v.size() - 1; i++){
        sort(v.begin(), v.end(), sort_by_point);
    }
    
    for(int i = 0; i < v.size(); i++){
        v[i].show();
    }
    return 0;
}