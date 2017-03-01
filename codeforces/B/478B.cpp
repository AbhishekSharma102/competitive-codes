#include <bits/stdc++.h>

using namespace std;

long long int getpairs(long long int n)
{
	long long int pairs;
	if(n%2 == 0)
		pairs = (n/2) * (n-1);
	else
		pairs = ((n-1)/2) * n;
	return pairs;
}

int main()
{
	long long int n, m;
	long long int minpairs, maxpairs, temp1, temp2;
	cin >> n >> m;
	maxpairs = getpairs(n-m+1);
	temp1 = (n%m)*getpairs(n/m + 1);
	temp2 = (m-(n%m))*getpairs(n/m);
	minpairs = temp1 + temp2;
	cout << minpairs << " " << maxpairs << endl;
	return 0;
}