#include <bits/stdc++.h>
using namespace std;
struct Gpa{
    string sur;
    string name;
    float point;

    void show(){
        cout << sur  << " "<< name << " ";
        printf("%.3f", point);
        cout << endl;
    }
};
bool sort_by_point(Gpa a, Gpa b){
    if(a.point == b.point){
        if(a.sur == b.sur){
            return a.name < b.name;
        }
        return a.sur < b.sur;
    }
    return a.point < b.point;
}

int main(){
    int n, m;
    string s;
    vector <Gpa> v;
    cin >> n;
    Gpa st;
    float g, k, sum = 0, csum = 0;
    for(int i = 0; i < n; i++){
        sum = 0; csum = 0;
        cin >> st.sur >> st.name;
        cin >> m;
        for(int j = 0; j < m; j++){
            cin >> s >> k;
            csum += k;
            if(s == "A+")g = 4.00; else if(s == "A")g = 3.75; else if(s == "B+")g = 3.50; else if(s == "B")g = 3.00; else if(s == "C+")g = 2.50; else if(s == "C")g = 2.00; 
            else if(s == "D+")g = 1.50; else if(s == "D")g = 1.00; else if(s == "F")g == 0;
            g = g * k;
            sum += g;            
        }
        st.point = sum / csum;
        v.push_back(st);
    }
    sort(v.begin(), v.end(), sort_by_point);

    for(int i = 0; i < v.size(); i++){
        v[i].show();
    }

    return 0;
}