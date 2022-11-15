#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a;
        cin >> a;
        string s = to_string(a);

        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            cnt += s[i] - '0';
        }

        if (cnt % 2 == 0)
            cout << "Sum of digits is even!"<<endl;
        else
            cout << "Sum of digits is odd!"<<endl;

        n--;
    }

    return 0;
}