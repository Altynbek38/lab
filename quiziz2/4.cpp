#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int mod[n], num[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
	sort(a, a + n);
	reverse(a, a + n);
  
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = i; j < n; j++){
            if(a[i] == a[j]){
                cnt++;
            }
        }
        mod[i] = a[i];
        num[i] = cnt;
    }

    int mx = 0;
    for(int i = 0; i < n; i++){
        if(num[i] > mx){
            mx = num[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(num[i] == mx){
            cout << mod[i] << " ";
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n, cnt, mx = 0;
// 	cin >> n;
// 	int a[n];
// 	int mod[n], num[n];

// 	for(int i = 0; i < n; i++){
// 		cin >> a[i];
// 	}

// 	for(int i = 0; i < n; i++){
// 		cnt = 0;
// 		for( int j = i; j < n; j++){
// 			if(a[i] == a[j]){
// 				cnt++;
// 			}
// 		}
// 		mod[i] = a[i];
// 		num[i] = cnt;
// 	}

// 	for(int i = 0; i < n; i++){
// 		if(num[i] > mx){
// 			mx = num[i];
// 		}
// 	}

// 	for(int i = 0; i < n; i++){
// 		if(num[i] == mx){
// 			cout << mod[i] << " ";
// 		}
// 	}

// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n, cnt, mx = 0;
// 	cin >> n;
// 	int a[n];
// 	int mod[n], num[n];

// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> a[i];
// 	}

// 	for (int i = 0; i < n; i++)
// 	{
// 		cnt = 0;
// 		for (int j = i; j < n; j++)
// 		{
// 			if (a[i] == a[j])
// 			{
// 				cnt++;
// 			}
// 		}
// 		mod[i] = a[i];
// 		num[i] = cnt;
// 	}

// 	for (int i = 0; i < n; i++)
// 	{
// 		if (num[i] > mx)
// 		{
// 			mx = num[i];
// 		}
// 	}

// 	if (mx == 1)
// 	{
// 		sort(a, a + n);
// 		for (int i = n - 1; i >= 0; i--)
// 		{
// 			cout << a[i] << " ";
// 		}
// 		return 0;
// 	}

// 	int counter = 0;
// 	for (int i = n - 1; i >= 0; i--)
// 	{
// 		if (num[i] == mx)
// 		{
// 			 counter++;
// 		}
// 	}

// 	int c[counter];
// 	for (int i = 0; i < counter; i++)
// 	{
// 		if (num[i] == mx)
// 		{
// 			c[i] = mod[i];
// 		}
// 	}

// 	for (int i = 0; i < counter; i++)
// 	{
// 		cout << c[i] << " ";
// 	}
// 	return 0;
// }