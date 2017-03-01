#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n, t;
	cin >> n >> t;
	long long int a[100005];
	a[0] = 0;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i <= n; i++)
		a[i] += a[i-1];
	long long int flagmain = 0, max = 0, maxi;
	for(int i = 1; i <= n; i++)
	{
		long long int mid, hi=n, lo=0;
		long long int x = a[i] - t;
		while(hi>lo)
		{
			mid = lo + (hi-lo)/2;
			if(a[mid] >= x)
				hi = mid;
			else
				lo = mid + 1;
		}
		if(a[hi] >= x)
		{
			flagmain = i - hi;
			if(flagmain > max)
				max=flagmain;
		}
	}
	cout << max << endl;
	return 0;
}