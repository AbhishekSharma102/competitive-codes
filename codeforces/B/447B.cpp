#include <bits/stdc++.h>

using namespace std;

int main()
{
	char ch[1005];
	int k, w[26], total;
	long long int sum = 0;
	cin >> ch;
	cin >> k;
	for(int i = 0; i<26; i++)
		cin >> w[i];
	int max = 0;
	for(int i = 0; i<26; i++)
	{
		if(w[i] > max)
			max= w[i];
	}
	total = strlen(ch) + k;
	for(int i = k; i > 0; i--)
	{
		sum += total*max;
		total --;
	}
	for(int i = strlen(ch) - 1; i >= 0; i--)
	{
		sum += total*w[ch[i] - 'a'];
		total --;
	}
	cout << sum << endl;
	return 0;
}