#include <bits/stdc++.h>

using namespace std;

int main()
{
	int m, s, min[105], max[105];
	cin >> m >> s;
	int temp = s, len = m;
	for(int i = 0; i < m; i++)
	{
		max[i] = 0;
		min[i] = 0;
	}
	if((s == 0 && m > 1) || s > 9*m)
	{
		cout << "-1 -1\n";
		return 0;
	}
	min[0] = 1;
	temp -= 1;
	for(int i = m-1; i >= 0; i--)
	{
		if(temp > 9)
		{
			min[i] += 9;
			temp -= 9;
		}
		else
		{
			min[i] += temp;
			break;
		}
	}
	temp = s;
	for(int i = 0; i < m; i++)
	{
		if(temp > 9)
		{
			max[i] += 9;
			temp -= 9;
		}
		else
		{
			max[i] += temp;
			break;
		}
	}
	for(int i = 0; i < m; i++)
		cout << min[i] ;
	cout << " ";
	for(int i = 0; i < m; i++)
		cout << max[i];
	cout << "\n";
	return 0;
}