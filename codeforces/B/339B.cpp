#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n, m, a[1000005], ttime = 0;
	cin >> n >> m;
	for(int i = 0; i<m; i++)
		cin >> a[i];
	ttime = a[0] - 1;
	for(int i = 1; i<m ; i++)
	{
		ttime += (n + a[i] - a[i-1])%n;
	}
	cout << ttime <<endl;
	return 0;
}