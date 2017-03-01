#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int x, y, r, x1, y1, moves = 0;
	cin >> r >> x >> y >> x1 >> y1;
	double dist = sqrt(pow(x1-x, 2) + pow(y1-y, 2));
	moves = ceil(dist/(2*r));
	cout << moves << endl;
	return 0;
}