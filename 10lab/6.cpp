#include <bits/stdc++.h>
using namespace std;
double GetPoint(double k){
    double m;
    if(k >= 95 && k <= 100) m = (double)12 / 3;
    else if(k >= 90 && k <= 94) m = (double)11 / 3;
    else if(k >= 85 && k <= 89) m = (double)10 / 3;
    else if(k >= 80 && k <= 84) m = (double)9 / 3;
    else if(k >= 75 && k <= 79) m = (double)8 / 3;
    else if(k >= 70 && k <= 74) m = (double)7 / 3;
    else if(k >= 65 && k <= 69) m = (double)6 / 3;
    else if(k >= 60 && k <= 64) m = (double)5 / 3;
    else if(k >= 55 && k <= 59) m = (double)4 / 3;
    else if(k >= 50 && k <= 54) m = (double)3 / 3;
    return m;
}
int main(){
    int n; 
    cin >> n;
    double a1, a2, f, c;
    double sum = 0, ans = 0;
    vector <double> v;

    for(int i = 0; i < n; i++){
        cin >> a1 >> a2 >> f >> c;
        sum += c;
        if((a1 + a2 < 30) || f < 20){
            v.push_back(0);
        }
        else{
            v.push_back(GetPoint(a1 + a2 + f) * c);
        }
    }

    for(int i = 0; i < v.size(); i++){
        //cout << v[i] << endl;
        ans += v[i];
    }
    cout << ans / sum;

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// double toScore(double n){
//     if(n>=95 && n<=100) n=4.00;
//     else if(n>=90 && n<=94) n = (double)11/(double)3;
//     else if(n>=85 && n<=89) n = (double)10/(double)3;
//     else if(n>=80 && n<=84) n = 3.00;
//     else if(n>=75 && n<=79) n = (double)8/(double)3;
//     else if(n>=70 && n<=74) n = (double)7/(double)3;
//     else if(n>=65 && n<=69) n = 2.00;
//     else if(n>=60 && n<=64) n = (double)5/(double)3;
//     else if(n>=55 && n<=59) n = (double)4/(double)3;
//     else if(n>=50 && n<=54) n = 1.00;
//     return n;
// }

// int main(){
//     int n;
//     cin >> n;
//     int att1, att2, final, credits;
//     int allcredits = 0;
//     vector<double> results(n);

//     for(int i = 0; i < n; i++){
//         cin >> att1 >> att2 >> final >> credits;
//         allcredits += credits;
//         if(att1 + att2 < 30 || final < 20){
//             results[i] = 0;
//         }else{
//             results[i] = toScore(att1 + att2 + final)*credits;
//         }
//     }

//     double sum = 0;
//     for(int i = 0; i < results.size(); i++){
//         sum += results[i];
//     }

//     cout << sum / double(allcredits) << endl;

//     return 0;
// }