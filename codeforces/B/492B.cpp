#include <bits/stdc++.h>

using namespace std;

int compare(const void * a, const void * b)
{
	return ( *(int *)a) - (*(int *)b);
}

int main()
{
	int n, l, pos;
	double maxval = 0.0,ans;
	cin >> n >> l ;
	int a[10000];
	for(int i = 0; i<n; i++)
		cin >> a[i];
	qsort(a, n, sizeof(int), compare);
	maxval = 2*max(a[0], l-a[n-1]);
	for(int i = 1; i< n; i++)
	{
		if(a[i] - a[i-1] > maxval)
		{
			maxval = a[i] - a[i-1];
			//cout << maxval << endl;
		}
	}
	//cout << maxval;
	ans = ((double)maxval)/2;
	cout << setprecision(9) << fixed;
	cout << ans << endl;
	return 0;
}