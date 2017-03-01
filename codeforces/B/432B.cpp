#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[100005][2], x[100005], y[100005], ans[100005][2];
	for(int i = 0; i < n; i++)
	{
		int xi, yi;
		cin >> xi >> yi;
		a[i][0] = xi;
		a[i][1] = yi;
		x[xi] += 1;
		y[yi] += 1;
	}
	/*for(int i = 0; i < 100005; i++)
	{
		if(x[i] != 0)
			cout << "x i=" << i << "\t" << x[i] << endl;
		if(y[i] != 0)
			cout << "y i=" << i << "\t" << y[i] << endl;
	}*/
	for(int i = 0; i < n; i++)
	{
		ans[i][0] = n - 1 + x[a[i][1]];
		ans[i][1] = n - 1 - x[a[i][1]];
	}
	for(int i = 0; i < n; i++)
		cout << ans[i][0] << " " << ans[i][1] << endl;
	return 0;
}