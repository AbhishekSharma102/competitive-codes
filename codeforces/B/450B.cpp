#include <bits/stdc++.h>
#define M 1000000007

using namespace std;

int main()
{
	long long int x, y, n, ans;
	cin >> x >> y;
	cin >> n;
	long long int f[6];
	f[0] = (x+M)%M;
	f[1] = (y+M)%M;
	f[2] = (((y+M)%M - (x+M)%M)+M)%M;
	f[3] = (-x+M)%M;
	f[4] = (-y+M)%M;
	f[5] = (((x+M)%M - (y+M)%M) + M)%M;
	ans = f[(n-1)%6];
	cout << ans << endl;
	return 0;
}