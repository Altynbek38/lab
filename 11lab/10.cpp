#include <bits/stdc++.h>
using namespace std;
struct Point{
    double x;
    double y;
    double ans;

    void read(){
        cin >> x >> y;
    }

    void show(){
        cout << x << " " << y << endl;
    }
};   

double Distance(Point p, Point m){
    double x = m.x - p.x;
    double y = m.y - p.y;
    x = x * x;
    y = y * y;
    return sqrt(x + y);
}

bool sort_by_distance(Point a, Point b){
    if(a.ans == b.ans){
        return a.x > b.x;
    }
    return a.ans < b.ans;
}
int main(){
    double n;
    Point m;
    vector <Point> v;
    Point p;
    p.read();
    cin >> n;
    for(int i = 0; i < n; i++){
        m.read();
        m.ans = 0;
        v.push_back(m);
    }

    for(int i = 0; i < v.size(); i++){
        v[i].ans = Distance(p, v[i]);
    }
    //for(int i = 0; i < v.size() - 1; i++){
        sort(v.begin(), v.end(), sort_by_distance);
    //}

    for(int i = 0; i < v.size(); i++){
        v[i].show();
    }
    return 0;
}    