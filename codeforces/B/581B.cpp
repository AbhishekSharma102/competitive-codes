#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> floors;
	int n, x;
	cin >> n;
	for ( int i = 0; i < n; i++){
		cin >> x;
		floors.push_back(x);
	}
	int maxim = floors[n-1];
	vector<int> a;
	a.push_back(0);
	for ( int i = n-2; i >= 0; i--) {
		if(floors[i] > maxim) {
			a.push_back(0);
			maxim = floors[i];
		}
		else {
			a.push_back(maxim - floors[i] + 1);
		}
	}
	for(int i = n-1; i >= 0; i--) 
		cout << a[i] << ' ';
	return 0;
}
