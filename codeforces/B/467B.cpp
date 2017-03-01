#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, k, nump = 0;
	unsigned long long int x[1005], fredo;
	cin >> n >> m >> k;
	for(int i = 0; i<m; i++)
		cin >> x[i];
	cin >> fredo;
	//int diff[1005];
	for(int i = 0; i<m; i++)
	{
		int count = 0;
		for(int j = 0; j < n; j++)
		{
			unsigned long long int temp = (unsigned long long int)pow(2, j);
			if((x[i] & temp) != (fredo & temp))
				count++;
		}
		if(count <= k)
			nump++;
	}
	cout << nump << endl;
	return 0;
}