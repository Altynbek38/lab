#include <iostream>
using namespace std;
int main(){
    double salary, save = 0, month = 0;
    cin >> salary;
    int apple = 0;
    for(int i = 0; apple < 500000; i++){ 
        save = (salary * 30) / 100;
        salary = (salary * 10) / 100 + salary;
        month++;
        apple = apple + save;
    }
    cout << month;


    return 0;
}