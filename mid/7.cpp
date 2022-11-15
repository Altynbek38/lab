#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, cnt, mx = 0;
	cin >> n;
	int a[n];
	int mod[n], num[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 0; i < n; i++){
		cnt = 0;
		for( int j = i; j < n; j++){
			if(a[i] == a[j]){
				cnt++;
			}
		}
		mod[i] = a[i];
		num[i] = cnt;
	}

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