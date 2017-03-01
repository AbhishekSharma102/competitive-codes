#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int a, b, c, n, cost = 1000000000000;
	cin >> n >> a >> b >> c;
	for (int i = 0; i<=3; i++){
		for(int j = 0; j<=3; j++) {
			for (int k = 0; k<=3; k++){
				if((n+i+j*2+k*3)%4 == 0)
					cost = min(cost, i*a+j*b+k*c);
			}
		}
	}
	cout << cost << '\n';
	return 0;
}
