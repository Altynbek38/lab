#include <iostream>
using namespace std;

double percentage(double pupils, double girls){
    double percentage = (girls * 100) / pupils;
    return percentage;
}

int main(){
    double pupils, girls;
    cin >> pupils >> girls;
    double ans = percentage(pupils, girls);
    cout << ans << endl;
    return 0;
}