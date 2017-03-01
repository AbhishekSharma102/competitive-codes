#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int h[n], curr = 0;
	long long int count = 0;
	for(int i = 0; i < n; i++)
		cin >> h[i];
	for(int i = 0; i<n-1; i++)
	{
		count += h[i] - curr + 1;
		curr = h[i];
		if(h[i+1] < curr)
		{
			count += curr - h[i+1];
			curr = h[i+1];
		}
		count ++;
	}
	count += h[n-1] - curr + 1;
	cout << count << endl;
	return 0;
}