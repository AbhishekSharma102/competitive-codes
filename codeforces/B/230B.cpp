#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int sieve[1000005] = {1};
	for(int i = 2; i<1000005; i++)
		sieve[i] = 1;
	for(int i = 2; i<1000005; i++)
	{
		if(sieve[i] == 1)
		{
			for(int j = 2*i; j < 1000005; j += i)
				sieve[j] = 0;
		}
	}
	//cout << sieve[2];
	for(int i = 0; i<n; i++)
	{
		long long int x, rootx;
		cin >> x;
		rootx = (long long int)sqrt(x);
		//cout << rootx << "\t" << x << endl;
		if(rootx*rootx == x && sieve[rootx] == 1)
			cout << "YES\n";

		else
			cout << "NO\n";
	}
	return 0;
}
	
